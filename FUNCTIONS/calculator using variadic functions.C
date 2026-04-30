#include <stdio.h>
#include <stdarg.h>

/* Variadic calculator function */
int calculator(char op, int count, ...)
{   int result;
    va_list args;
    va_start(args, count);

    
    /* First number initialization */
    result = va_arg(args, int);

    for (int i = 1; i < count; i++)
    {
        int num = va_arg(args, int);    
        switch (op)
        {
            case '+':
                result += num;
                break;

            case '-':
                result -= num;
                break;

            case '*':
                result *= num;
                break;

            case '/':
                if (num != 0)
                    result /= num;
                else
                {
                    printf("Division by zero error\n");
                    va_end(args);
                    return 0;
                }
                break;

            default:
                printf("Invalid operator\n");
                va_end(args);
                return 0;
        }
    }

    va_end(args);
    return result;
}

int main(void)
{
    printf("Addition: %d\n", calculator('+', 4, 10, 20, 30, 40));
    printf("Subtraction: %d\n", calculator('-', 3, 100, 30, 20));
    printf("Multiplication: %d\n", calculator('*', 3, 2, 3, 4));
    printf("Division: %d\n", calculator('/', 3, 100, 2, 5));

    return 0;
}
