#include <stdio.h>
// Regresa la parte entera de la raiz cuadrada de x
int RaizEntera(int x)
{
	// Casos base
	if (x == 0 || x == 1) //3
		return x; //1

	// Empezando desde 1, Intenta con todos los numeros hasta que
	// i*i sea mas grande o igual a x.
	int i = 1, resultado = 1; //1+1
	while (resultado <= x) //n*(1+2)
    { 
		i++;                //1
		resultado = i * i; //2
	}
	return i - 1;          //1
}

int main()
{
	int x = 11;
	printf("%d\n", RaizEntera(x));
	return 0;
}
