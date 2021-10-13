//  Problem:
//  The prime factors of 13195 are 5, 7, 13 and 29.
//  What is the largest prime factor of the number 600851475143 ?

#include <stdio.h>

int main()
{
    int primeFactors = 1, largestPrimeFactor = 0;
    long number = 600851475143;

    while (number != 1)
    {

        if (number % primeFactors == 0)
        {

            number = number / primeFactors;

            if (primeFactors > largestPrimeFactor)
            {

                largestPrimeFactor = primeFactors;
            }
        }
        if (number != 1)
        {
            primeFactors++;
        }
    }

    printf("\nThe largest prime factor of the number 600851475143 is: %d\n\n", primeFactors);

    return 0;
}