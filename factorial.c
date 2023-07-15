#include <stdio.h>

int main()
{

    int n;
    printf("enter the the number: ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("%d\n", fact);
    }
    printf("final factorial is %d \n", fact);

    return 0;
}