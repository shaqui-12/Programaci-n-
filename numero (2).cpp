#include  <stdio.h>
#include  <stdlib.h>
int main (){
int numero=1;
   while(numero<=500){
   printf("%d,%d,%d\n",numero,numero*numero,numero*numero*numero);
   numero++;
}
   printf("fin");
system("Pause");
return 0;
}