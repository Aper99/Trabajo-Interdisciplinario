//Grupo 1 : Conversor/Ingresa Decimal : Salida Binario - Octal
#include <stdio.h>

int main(){
	
	int n, x,c=1,aux;
	
	printf("Ingrese un numero: \n");
	scanf("%i",&n);
	aux = n;
	while ( (n / 2) > 0)
	{
		c++;
		n = n / 2;
	}
	printf("%i\n",c);
	
	n = aux;
	int aux2= c;
	
	int b[c];
	x = 0;
	while(n>0)
	{
		b[x] = n % 2;
		n = n / 2;
		x++;
	}

	for (x=aux2-1;x>=0;x--)
	{
		printf("%i",b[x]);
	}
	return 0;
}
