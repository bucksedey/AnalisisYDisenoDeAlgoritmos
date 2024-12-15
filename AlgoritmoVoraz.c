/*
Este programa convierte un número decimal en su representación hexadecimal utilizando un algoritmo voraz.
La conversión se realiza dividiendo repetidamente el número entre 16 y tomando el residuo (el dígito hexadecimal).
El resto se almacena en un arreglo de caracteres y se va construyendo la representación hexadecimal.
El algoritmo sigue dividiendo hasta que el cociente llega a cero, luego invierte la cadena para obtener el resultado correcto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BITS 64

void strrev(char str[]){
	int len = strlen(str);
	char tmp, i, j;
	int middle = len /2;
	
	for(i=0, j=len-1; i < j; i++,j--){
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

int main(int argc, char **argv){
	
	char HEX_VALUES[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

	int number = (int) atoi(argv[1]);
	printf("Decimal:     %d \n", number);
	
	//Necesita 65 porque el ultimo es '\0'
	char hexadecimal[BITS + 1];
 
	//r - resto , q - cociente
	int q=number ,r=0, index=0;

	while (q != 0){
		r = number % 16;
		q = number / 16;
		hexadecimal[index] = HEX_VALUES[r];
		number = q;
		index++;
	}

	hexadecimal[index] = '\0';
	strrev(hexadecimal);
	
	printf("Hexadecimal: %s \n", hexadecimal);

	return 0;
} 