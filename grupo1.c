//Grupo 1 : Conversor/Ingresa Decimal : Salida Binario - Octal
#include <stdio.h>

int main(){
	
	int n, x,c=1,co=1,aux;
	
	printf("Ingrese un numero: \n");
	scanf("%i",&n);
	aux = n;
	while ( (n / 2) > 0)//Cantidad de cifras para binario
	{
		c++;
		n = n / 2;
	}
	//printf("%i\n",c);
	n = aux;
	while ( (n)>= 8)
	{
		co++;
		n = n / 8;
	}
	//printf("\n%i\n",co);
	
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
	//
	x = 0;
	n = aux;
	aux2 = co;
	int o[co];
	for (x=0;x<=aux2-1;x++)
	{
		o[x] = n % 8;
		n = n / 8;
	}
	printf("\n");
	aux2 = co;
	for (x=aux2-1;x>=0;x--)
	{
	printf("%i",o[x]);
	}
	return 0;
}
