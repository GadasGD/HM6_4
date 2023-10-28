#include <stdio.h>
#include <math.h>


int main()
{
    int IN, num, result;

    printf("Input first number: ");
    scanf("%d", &IN);
    printf("Input quantity numbers: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        result = pow(IN, i);
        printf("%d ", result);
    }
    
    printf("\n");
    return 0;
}
