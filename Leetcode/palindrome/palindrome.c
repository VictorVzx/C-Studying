#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    int inv=0, temp, original=x ;

    while(x != 0){
        temp = x % 10;
        inv = inv * 10 + temp;
        x = x / 10;
    }

    if(inv == original){
        return true;
    } else {
        return false;
    }

}

int main(void){
    int x = 121;

    int teste = isPalindrome(x);
    printf("%d ", teste);


    return 0;
}

