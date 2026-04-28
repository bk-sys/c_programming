#include <stdio.h>

/* Recursive function to count occurrence of digit */
int count_occurrence(int num, int digit)
{
    if (num == 0)
        return 0;

    if (num % 10 == digit)
        return 1 + count_occurrence(num / 10, digit);
    else
        return count_occurrence(num / 10, digit);
}

int main(void)
{
    int number, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter digit to find occurrence: ");
    scanf("%d", &digit);

    int result = count_occurrence(number, digit);

    printf("Occurrence of %d = %d\n", digit, result);
    return 0;
}

