#include <stdio.h>

int main(void){
    int nums, smallest, highest;

    int i = 0;
    highest = 0;
    smallest = 0;

    while(i < 10){
        printf("Digite 10 numeros: ");
        scanf("%d", &nums);

        //iteração
        if(i == 0){
            highest = nums;
            smallest = nums;
        } else {
            if(nums > highest){
                highest = nums;
            } else if (nums < smallest){
                smallest = nums;
            }
        }

        i++;
    }

    printf("Maior numero: %d, Menor numero: %d", highest, smallest);

    return 0;
}
