#include <stdio.h>
// prime numbers b/w two numbers
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int start, end;

    // Take user input
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Find and print prime numbers in the range
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
                                                                                                                                                                                                                                                                                                                            