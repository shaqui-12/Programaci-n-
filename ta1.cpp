#include <stdio.h>
#include <string.h>
int main() {
    char palabR[30];
    int i, j;
    int conteo[26] = {0};
    printf("Palabra: ");
    scanf("%s", palabR);
    for(i = 0; i < strlen(palabR); i++) {
    if(palabR[i] >= 'A' && palabR[i] <= 'Z')
    palabR[i] = palabR[i] + 32;
    if(palabR[i] >= 'a' && palabR[i] <= 'z')
    conteo[palabR[i] - 'a']++;
    }
    for(i = 0; i < strlen(palabR); i++) {
    int repetida = 0;
    for(j = 0; j < i; j++)
    if(palabR[i] == palabR[j])
    repetida = 1;
    if(!repetida && palabR[i] >= 'a' && palabR[i] <= 'z')
    printf("%c -> %d\n", palabR[i], conteo[palabR[i] - 'a']);
    }
    return 0;
}