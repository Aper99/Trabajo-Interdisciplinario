//Grupo 2 : Conversor/Ingresa Decimal : Salida Binario - Hexadecimal
#include <stdio.h>
int main(){
	int opcion;
	int numero;
    int hexadecimales(int numero);
    char hexadecimal[16]={'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int i=0; 
    int binarios(int numero);
    char binario[2]={'0','1'};
    int c=0;
   printf("\n\n\t Conversor");
   printf("\n\n\t Digite la opcion de su preferencia");
   printf("\n\n\t 1.Entrada Decimal-Salida Binario");
   printf("\n\n\t 2.Entrada Decimal-Salida Hexadecimal");
   printf("\n\n\t 3.Salir ");
   printf("\n\n\t Opcion ");
   scanf("%d",&opcion);
   switch(opcion){
    case 1:
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
      };break;

    case 2: 
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
    };break;
    case 3: break;
   }
   getch();
   return(0);
}
