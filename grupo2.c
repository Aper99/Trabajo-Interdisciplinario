//Grupo 2 : Conversor/Ingresa Decimal : Salida Binario - Hexadecimal 
#include <stdio.h>
void binario (int N);
int main(){
 int N;
 int aux;
    aux=N;
    do{
   	printf("Digite un numero : ");
   	scanf("%d",&N);
	}while (N<0);
	
	binario(N);
	return (0);	
}  
   void binario(int N){
   	if (N>1) binario(N/2);
   	printf("%d",N%2);
   }  
//
