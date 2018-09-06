//Grupo 3 : Conversor/Ingresa Binario : Salida Decimal - Octal
#include<stdio.h>
int binarioA10 (char x[]);
int main(){
	
	char binario[100];
	printf("Ingrese un numero binario\n");
	fflush(stdin);
	gets(binario);
	long int num = binarioA10(binario);
	if (num == -1)
	{
		printf("El numero no es binario\n");
	}
	else
	{
		printf("%li",num);	
	}

	
	return 0;
}

int binarioA10 (char x[]){
	 int i = 0;
	 int y = 0;
	int n;
	while (x[i] != '\0')
	{
		n = x[i] - 48;
	
		if ((n != 0) && (n != 1))
		{
			return -1;
		}
		
		y = (y*2)+n;
		i++;
			
	}
	return y;
}
