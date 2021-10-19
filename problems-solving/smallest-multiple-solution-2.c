//2520 is the smallest number that can be divided by each of the
//numbers from 1 to 10 without any remainder. What is the smallest
//positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>

long long smallestPositiveNumber(long long a, long long b)
{
    long long leastCommonMultiple, highestCommonFactor = 0;
    long long i = 1;
    long long ger = a > b ? a : b;

    while (i < ger)
    {
        if ((a % i == 0) && (b % i == 0))
            highestCommonFactor = i;
        i++;
    }

    leastCommonMultiple = (a * b) / highestCommonFactor;

    return leastCommonMultiple;
}
int main()
{
    long long leastCommonMultiple = 1;
    for (long long i = 2; i <= 20; i++)
    {
        leastCommonMultiple = smallestPositiveNumber(leastCommonMultiple, i);
    }
    printf("Smallest multiple = %lld\n\n", leastCommonMultiple);

    return 0;
}