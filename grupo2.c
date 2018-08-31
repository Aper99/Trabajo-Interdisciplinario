//Grupo 2 : Conversor/Ingresa Decimal : Salida Binario - Hexadecimal
#include<stdio.h>
int main(){
	int numero;
    int hexadecimales(int numero);
    char hexadecimal[16]={'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int i=0; 
    int binarios(int numero);
    char binario[2]={'0','1'};
    int c=0;
  
    printf("Ingrese un valor ");
	scanf("%d",&numero);
    while (numero!=0){
         binario[c]=numero % 2;
          numero=numero / 2;
          c++;
    }
    c--;
    printf("Binario: ");   
    while (c>=0)
    {
          printf("%u",binario[c]);
          c--;
      }

    
	printf("Ingrese un valor ");
	scanf("%d",&numero);
    
	while (numero!=0){
           hexadecimal[i]=numero%16;
           numero=numero/16;
           i++;}
           
     printf("\nHexadecimal: ");
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
    	
   getch();
   return(0);
}
