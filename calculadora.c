#include<stdio.h>
#include<math.h>

int menu();
void binario();
void hex();
void octal();

int main(){
	int j = 1;
	while(j ==1){
		int opcion = menu();

		switch(opcion){
			case 1 : binario(); break;
			case 2 : octal(); break;
			case 3 : hex(); break;
			
		}
		printf("\n\n\t%cDesea convertir otro numero?  \n\n\t1- Si 2- No \n\n\tOpcion: ",168);
		scanf("%d",&j);
	}
	
	return 0;
}

int menu(){
	int opcion, x =0;
	printf("\n\n\t Conversor");
	printf("\n\n\t Digite la opcion de su preferencia");
	printf("\n\n\t 1.Entrada Decimal-Salida Binario");
	printf("\n\n\t 2.Entrada Decimal-Salida Octal");
	printf("\n\n\t 3.Entrada Decimal-Salida Hexadecimal");
	printf("\n\n\t 5.Salir ");
	printf("\n\n\t Opcion ");
	scanf("%d",&x);
	return x;
}
void binario(){
	int numero,c = 0;
	char binario[2]={'0','1'};
	printf("\n\n\t Ingrese un valor ");
	scanf("%d",&numero);
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
void octal(){
	int c=1, i, x;
	int b = 0;
	printf("\n\n\t Ingrese un valor ");
	scanf("%d",&x);
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
	printf("\n\n\t%d",b);
}
void hex(){
	int numero, c=0, i =0;
	char hexadecimal[16]={'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("\n\n\t Ingrese un valor ");
	scanf("%d",&numero);
    
	while (numero!=0){
           hexadecimal[i]=numero%16;
           numero=numero/16;
           i++;}
           
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

