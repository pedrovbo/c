//  Question
//  If we list all the natural numbers below 10 that are multiples of 3 or 5,
//  we get 3, 5, 6 and 9. The sum of these multiples is 23.
//  Find the sum of all the multiples of 3 or 5 below 1000.
#include <stdio.h>

int main()
{
    int a = 3, b = 5;
    
    for(int i = 0; i < 1000; i++){
        if(i%a == 0 || i%b == 0){
            printf("Múltiplos de 3 ou 5:  %d\n", i);
        }
    }
    
    printf("\n\n");
}
