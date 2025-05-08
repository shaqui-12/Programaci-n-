#include <stdio.h>
#include <string.h>
int main() {
char pal1[100];
char pal2 [100];
char otra [100];
printf("ingresa palabra 1:\n");
scanf("%s", &pal1);
printf("ingresa palabra2: \n");
scanf("%s", &pal2);
strcpy(otra, pal1);
strcpy(pal1, pal2);
strcpy(pal2, otra);
printf("palabra l; %s \n", pal1);
printf("palabra 2; %s \n",pal2);
return 0;
}