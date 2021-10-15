//  Problem:
//  A palindromic number reads the same both ways. The largest palindrome made
//  from the product of two 2-digit numbers is 9009 = 91 × 99.
//  Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
#include <stdbool.h>

bool palindrome(int number)
{
    bool palindromic;
    int aux = 0, reverse = 0, largest = 0;

    aux = number;
    reverse = 0;

    while (aux != 0)
    {
        reverse = reverse * 10 + aux % 10;
        aux = aux / 10;
    }

    if (reverse == number)
        return palindromic = true;
    else
        return palindromic = false;
}

int main()
{

    int largestPalindrome = 0;
    
    for (int i = 999 * 999; i >= 100 * 100; i--)
    {
        if (palindrome(i) == true)
        {
            largestPalindrome = i;            
            break;
        }
    }

    printf("\n\nLargest palindrome made from the product of two 3-digit numbers is: %d\n\n", largestPalindrome);

    return 0; 

}