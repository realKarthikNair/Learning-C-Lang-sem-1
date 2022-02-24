// Convert celsius to fahrenheit by taking input from the user

#include <stdio.h>

int main()
{
    int celsius;
    printf("Enter temperature in degree celsius: ");
    scanf("%d", &celsius);
    printf("Temperature in fahrenheit is %f\n", (celsius*1.8)+(32));
}