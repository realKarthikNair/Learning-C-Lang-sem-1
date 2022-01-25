#include <stdio.h>

int main()
{    
    int cp, sp;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter sellings price: ");
    scanf("%d", &sp);
    if (sp>cp)
    {
        printf("Profit of %d", sp-cp);
    }
    else if (sp<cp)
    {
        printf("Loss of %d", cp-sp);
    }
    else
    {
        printf("No profit or loss");
    }
    printf("\n");
}
