/*
Este programa utiliza un algoritmo recursivo para descomponer un número en sus factores primos.
La función f toma dos parámetros: 'num' (el número a descomponer) y 'div' (el divisor actual).
Si el número es divisible por 'div', imprime el divisor y llama a la función recursivamente con el cociente.
Si no es divisible, incrementa el divisor y vuelve a intentar.
El proceso se repite hasta que el número es completamente descompuesto en factores primos.
*/

#include <stdio.h>

void f(int num, int div)
{
    if(num>1)
    {
        if((num%div)==0)
        {
            printf("%d\n",div);
            f(num/div,div);
        }
        else
            f(num,div+1);
    }
}

int main()
{
    f(500,2);
    return 0;
}