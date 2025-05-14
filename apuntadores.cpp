#include <stdio.h>
#include <stdlib.h>

int *p,y;
void func ()
{
int x=40;
p=&x;
y=*p;
*p=23;
}

int main (void)
{
 func ();
 y=*p;
 *p=25;
 printf ("el valor de y es: %d\n el valor de *p es %d\n el valor de p es %p\n",y,*p,p); 
 return 0;
}