//Grupo 2 : Conversor/Ingresa Decimal : Salida Binario - Hexadecimal 

#include <stdio.h>
#include <conio.h>

short i;
unsigned short binario[7];
unsigned short hexadecimal[10];

int main()
{
   
    int numero=0;
    
    int binarios(int); 
    int hexadecimales(int);
   
   
    printf("Ingrese valor a convertir: ");
    scanf("%u",&numero);
    
    
    binarios(numero);
    hexadecimales(numero);
    getch();
    return 0;
}

int binarios(int numero)
{
    i=0; 
    
    while (numero!=0)
    {
          binario[i]=numero % 2;
          numero=numero / 2;
          i++;
    }
    i--;
    printf("Binario: ");   
    
    while (i>=0)
    {
          printf("%u",binario[i]);
          i--;
    }
}
 int hexadecimales(int numero)
 {
     i=0;
     while (numero!=0)
     {
           hexadecimal[i]=numero%16;
           numero=numero/16;
           i++;
     }
     printf("\nHexadecimal: ");
     i--;
     while (i>=0)
     {
           switch(hexadecimal[i])
           {
                             case 10:
                                  printf("A");
                             break;
                             case 11:
                                  printf("B");
                             break;
                             case 12:
                                  printf("C");
                             break;
                             case 13:
                                  printf("D");
                             break;
                             case 14:
                                  printf("E");
                             break;
                             case 15:
                                  printf("F");
                             break;
                             default:
                                   printf("%d",hexadecimal[i]);
                             break;
           } 
           i--;
     }
}
