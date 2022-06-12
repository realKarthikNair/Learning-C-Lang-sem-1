// Implement static stack push, pop and traversal

#include <stdio.h>

int main()
{
    static int n = 10, stack[10];
    int choice = 0, top = -1, item;
    printf("\nA stack of size 10 has been declared\n");
    do
    {
        printf("\nEnter 1 to push\n");
        printf("\nEnter 2 to pop\n");
        printf("\nEnter 3 to traverse\n");
        printf("\nEnter 4 to exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Push Operation\n");
            if (top == n - 1)
            {
                printf("Stack Overflow\n");
                break;
            }
            else
            {
                printf("Enter element to push: ");
                scanf("%d", &stack[++top]);
                printf("\n%d Pushed Successfully\n", stack[top]);
            }
            break;
        }
        case 2:
        {
            if (top == -1)
            {
                printf("Stack Underflow\n");
                break;
            }
            else
            {
                item = stack[top--];
                printf("\n%d Deleted Successfully", item);
            }
            break;
        }
        case 3:
        {
            if (top == -1)
            {
                printf("Stack is Empty. Nothing to traverse.\n");
            }
            else
            {
                for (int i = 0; i < top + 1; i++)
                {
                    printf("%d, ", stack[i]);
                }
                printf("\n");
            }
            break;
        }
        case 4:
        {
            printf("\nExiting. . . \n");
            break;
        }
        default:
            printf("Invalid Input...  Please Try Again\n");
            main();
        }
    } while (choice < 4);
}