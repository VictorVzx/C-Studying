#include <stdio.h>
#include <string.h>

int main(void){
    char a[] = "Hello,";
    char b[50];

    strcpy(b, a);
    strcat(b, " World!");   
    printf("%s", b);

    return 0;
}