#include <stdio.h>
void main()
{
    int n, reversedNumber = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n%10;
        reversedNumber = reversedNumber*10 + rem;
        n /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

}
