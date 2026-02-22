#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void){
    uint64_t age;

    age = 73;

    printf("%ld", age);

    strcpy(age, age);

    return 0;
}