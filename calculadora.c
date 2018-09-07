#include<stdio.h>
#include<math.h>

//Prototipos
int menu();
int leernumero();
void binario();
void hex();
void octal();
int binarioA10();

//Funcion Principal
int main(){
	int j = 1;
	while(j ==1){//Condicion para repetir el proceso
		int opcion = menu();//Muestra las opciones
		switch(opcion){
			case 1 : binario(); break;//Decimal a Binario
			case 2 : octal(leernumero()); break; //Decimal a Octal
			case 3 : hex(leernumero()); break;//Decimal a Hexadecimal
			case 4 : printf("Decimal: %i",binarioA10());break;//Binario a Decimal
			case 5 : octal(binarioA10());break;//Binario a Octal
			case 6 : hex(binarioA10());break;//Binario a Hexadecimal
			case 9 : goto salir;//Finaliza directamente el programa
			default : printf("\nOpcion no valida");
			
		}
		printf("\n\n\t%cDesea convertir otro numero?  \n\n\t1- Si 2- No \n\n\tOpcion: ",168);
		scanf("%d",&j);
	}
	salir:
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
	printf("\n\n\t Digite la opcion de su preferencia");
	printf("\n\n\t 1.Entrada Decimal-Salida Binario");
	printf("\n\n\t 2.Entrada Decimal-Salida Octal");
	printf("\n\n\t 3.Entrada Decimal-Salida Hexadecimal");
	printf("\n\n\t 4.Entrada Binario-Salida Decimal");
	printf("\n\n\t 5.Entrada Binario-Salida Octal");
	printf("\n\n\t 6.Entrada Binario-Salida Hexadecimal");
	printf("\n\n\t 9.Salir ");
	printf("\n\n\t Opcion: ");
	scanf("%d",&x);
	return x;
}
void binario(){// Funcion Conversor
	int numero,c = 0;
	char binario[2]={'0','1'};
	numero=leernumero();
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
void hex(int numero){// Funcion Conversor
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
	}
	else
	{
		return y;	
	}
	
}
