#include <stdio.h>
int days_in_month(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        return 31;

    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 29;   // leap year
    else
        return 28;
}

int main(void)
{
    int d1 = 3, m1 = 2, y1 = 2026;
    int d2, m2, y2;
    int days = 0;

    printf("Enter date in this format(dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    while (y1 < y2 || m1 < m2 || d1 < d2)
    {
        days++;
        d1++;

        if (d1 > days_in_month(m1, y1))
        {
            d1 = 1;
            m1++;
        }

        if (m1 > 12)
        {
            m1 = 1;
            y1++;
        }
    }

    printf("Number of days between the two dates: %d\n", days);
    return 0;
}

