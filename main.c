#include <stdio.h>
#include <stdlib.h>

/**
Recorrer un archivo y mostrar sus elementos en forma invertida de forma recursiva.Recorrer un archivo y mostrar sus elementos en forma invertida de forma recursiva.
**/


///prototipado
int factorial(int); //calcula el factorial de un N
int potencia (int,int); //calcula la potencia de un N
void recorre_arreglo (char[], int); //recorre arreglo desde la posición 0 y printea de forma invertida
int arreglo_capicula (char[], int, int); // retorna 1 si el arreglo es capicúa. Parametros: arreglo, validos y pos donde empieza a comaprar
int suma_recursiva (int[], int); //suma recursiva todos los elementos de un arreglo. Parametros: array y validos
void recorrer_y_mostrar (int[], int); //recorre y muestra elementos del arreglo
int buscar_menor (int[], int); //busca y retorna menos elemento


///implementación
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }

}
int potencia (int b, int e) // 2^3 = 2.2.2
{
    if (e == 0)
    {
        return 1; //2
    }
    else
    {

        return b*(potencia (b, e-1));
    }

}
void recorre_arreglo (char arreglo[], int validos)
{
    if (validos>0)
    {
        printf("%c", arreglo[validos-1]); //printea la última celda cargada
        recorre_arreglo(arreglo, validos-1); //se mueve una posición hacia atrás
    }
}
int suma_recursiva(int arreglo[], int validos)
{
    if (validos==0)
    {
        return 0;
    }
    else
    {
        return arreglo[validos-1]+ suma_recursiva(arreglo, validos-1);
    }


}
int arreglo_capicula(char arreglo[], int validos, int i)
{

    if (arreglo[i] != arreglo[validos-1])
    {
        return 0;
    }
    else
    {
        return 1* (arreglo_capicula(arreglo, validos-1, i+1));
    }
}
void recorrer_y_mostrar(int arreglo[], int validos)
{
    if (validos > 0)
    {
        recorrer_y_mostrar(arreglo, (validos-1));
        printf("%i", arreglo[validos-1]);
    }
}
int buscar_menor(int arreglo[], int validos)
{
    int menor;

    if (validos == 0)
    {
        return arreglo[0];
    }
    else
    {
        menor = buscar_menor(arreglo, validos-1);
        if (arreglo[validos] < menor)
        {
            menor = arreglo[validos];
        }
        return menor;
    }
}






int main()
{
    int rta_factorial, rta_potencia, rta_sumatoria, rta_capicua;
//   char arreglo_char[6] = {'b', 'm', 's', 's', 'm', 'b'};
//   int validos = 6;
    int arreglo_sumatoria[6] = {2, 1, 0, 4, 3, 5};
    int validos = 6;
    int menor = arreglo_sumatoria[validos-1];

//   rta_factorial = factorial(4);
//   printf("%i", rta_factorial);
//   rta_potencia = potencia (5, 8);
//   printf ("Potencia: %i", rta_potencia);
//   recorre_arreglo(arreglo_char, validos);
//   rta_sumatoria = suma_recursiva(arreglo_sumatoria, validos);
//   printf("Sumatoria = %i", sumatoria);
//    rta_capicua = arreglo_capicula(arreglo_sumatoria, validos, 0);
//    if (rta_capicua == 1)
//    {
//        printf("El arreglo es capicua!\n");
//  }
//    recorrer_y_mostrar(arreglo_sumatoria, validos);
    printf("%i\n", menor);
    buscar_menor(arreglo_sumatoria, validos);
    printf("%i", menor);






    return 0;
}
