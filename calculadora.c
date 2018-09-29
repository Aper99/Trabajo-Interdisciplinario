#include<stdio.h>
#include<math.h>

//Prototipos
int menu();
int leernumero();
void binario();
void hex();
void octal();
int binarioA10();
int OctalA10();
int HexA10();

//Funcion Principal
int main(){
	int j = 1;
	while(j ==1){//Condicion para repetir el proceso
		int num,x;
		int opcion = menu();//Muestra las opciones
		
		switch(opcion){
			case 1 : num = leernumero(); binario(num); octal(num); hex(num); break;//Entrada decimal
			case 2 : x = binarioA10(); octal(x); hex(x); break;//Entrada Binario
			case 3 : x = OctalA10(); binario(x); hex(x); break;
			case 4 : x = HexA10(); binario(x); octal(x); break;
			case 5 : return 0;//Finaliza directamente el programa
			default : printf("\n\n\tOpcion no valida");
			
		}
		printf("\n\n\n\n\t %cDesea convertir otro numero?  \n\n\t 1- Si 2- No \n\n\t Opcion: ",168);
		scanf("%d",&j);
	}
	
	return 0;
}

int leernumero(){//Funcion de lectura de numero
	int numero;
	printf("\n\n\t Ingrese un valor ");
	scanf("%d",&numero);
	return numero;
}

int menu(){//Opciones del Menu
	int opcion, x =0;
	printf("\n\n\t Conversor");
	printf("\n\n\t Seleccione la base ");
	printf("\n\n\t 1.Entrada Decimal ");
	printf("\n\n\t 2.Entrada Binario");
	printf("\n\n\t 3.Entrada Octal");
	printf("\n\n\t 4.Entrada Hexadecimal");
	printf("\n\n\t 5.Salir ");
	printf("\n\n\t Opcion: ");
	scanf("%d",&x);
	return x;
}
void binario(int numero){// Funcion Conversor
	int c = 0;
	char binario[2]={'0','1'};
    while (numero!=0){
         binario[c]=numero % 2;
          numero=numero / 2;
          c++;
    }
    c--;
    printf("\n\n\t Binario: ");   
    while (c>=0)
    {
          printf("%u",binario[c]);
          c--;
    }
}
void octal(int x){// Funcion Conversor
	if (x != -1) {
		int c=1, i;
		int b = 0;
		int aux = x;
		while (x>=8)
		{
			c++;
			x /= 8;
		}
		for (i=0;i<c;i++)
		{
			b += (aux % 8)*pow(10,i);
			aux /= 8;
		}
		printf("\n\n\t Octal: %d",b);
	}
}
void hex(int numero){// Funcion Conversor
	if (numero != -1){
		int c=0, i =0;
		char hexadecimal[16]={'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
		while (numero!=0){
	           hexadecimal[i]=numero%16;
	           numero=numero/16;
	           i++;
		}
	           
	     printf("\n\n\t Hexadecimal: ");
	     i--;
	     
	     while (i>=0){
	     switch(hexadecimal[i]){
	     case 10:
	     printf("A");break;
	     case 11:
	     printf("B");break;
	     case 12:
	     printf("C");break;
	     case 13:
	     printf("D");break;
	     case 14:
	     printf("E");break;
	     case 15:
	     printf("F");break;
	     default:
	     printf("%d",hexadecimal[i]);break;
	    } 
	    i--;
	    }
	}
}

int binarioA10(){// Funcion Conversor
	char x[100];
	printf("\n\n\t Ingrese un numero binario ");
	fflush(stdin);
	gets(x);
	int i = 0, y = 0;
	int n;
	while (x[i] != '\0')
	{
		n = x[i] - 48;
	
		if ((n != 0) && (n != 1))
		{
			y = -1; break;
		}
		else 
		{
			y = (y*2)+n;
			i++;
		}
			
	}
	if (y == -1)
	{
		printf("\n\n\t El numero no es binario ");
		return -1;
	}
	else
	{
		printf("\n\n\t Decimal: %d",y);
		return y;	
	}
	
}

int OctalA10(){
	char oct[100];
	int i=0, x, num = 0;
	printf("\n\n\t Ingrese un numero Octal ");
	fflush(stdin);
	gets(oct);
	while (oct[i] != '\0')
	{
		switch (oct[i])
		{
			case '0': x = 0; break;
			case '1': x = 1; break;
			case '2': x = 2; break;
			case '3': x = 3; break;
			case '4': x = 4; break;
			case '5': x = 5; break;
			case '6': x = 6; break;
			case '7': x = 7; break;
			default : printf("\n\n\t No es un numero Octal"); return -1;
		}
		num = x + (num * 8);
		i++;
	}
	

	printf("\n\n\t Decimal: %d",num);
	return num;	
}

int HexA10(){
	char hex[100];
	int i=0, x, num = 0;
	printf("\n\n\t Ingrese un numero Hexadecimal ");
	fflush(stdin);
	gets(hex);
	
	while (hex[i] != '\0')
	{
		switch (hex[i])
		{
			case '0': x = 0; break;
			case '1': x = 1; break;
			case '2': x = 2; break;
			case '3': x = 3; break;
			case '4': x = 4; break;
			case '5': x = 5; break;
			case '6': x = 6; break;
			case '7': x = 7; break;
			case '8': x = 8; break;
			case '9': x = 9; break;
			case 'A':
			case 'a': x = 10; break;
			case 'B':
			case 'b': x = 11; break;
			case 'C':
			case 'c': x = 12; break;
			case 'D':
			case 'd': x = 13; break;
			case 'E':
			case 'e': x = 14; break;
			case 'F':
			case 'f': x = 15; break;
			default : printf("\nNo es un numero Hexadecimal"); return -1;
		}
		num = x + (num * 16);
		i++;
	}
	printf("\n\n\t Decimal: %d",num);
	return num;	
}

