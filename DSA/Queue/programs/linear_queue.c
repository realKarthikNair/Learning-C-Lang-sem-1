#include <stdio.h>

int main()
{
    static int n = 10, queue[10], front=-1, rear=-1, item, i;
    int choice;
    printf("\nA Queue of size 10 has been declared\n");
    do
    {
        printf("\nEnter 1 to Enqueue\n");
        printf("\nEnter 2 to Dequeue\n");
        printf("\nEnter 3 to traverse\n");
        printf("\nEnter 4 to exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                if (rear==n-1)
                {
                    printf("Overflow\n");break;
                }
                else if(front==-1)
                {
                    front=0;
                    rear=0;
                }
                else
                {
                    ++rear;
                }
                printf("Enter element to be enqueued: ");
                scanf("%d", &queue[rear]);  
                printf("Enqueue Success!\n");
                break;
            }
            case 2:
            {
                if((rear==-1))
                {
                    printf("Underflow\n");break;
                }
                else
                {
                    item = queue[front];
                    if (front==rear)
                    {
                        front=rear=-1;
                    }
                    else
                    {
                        ++front;
                    }
                }
                printf("%d  dequeued successfully\n", item);
                break;
            }
            case 3:
            {
                if((rear==-1))
                {
                    printf("Queue is Empty. Nothing to print\n");break;
                }
                else
                {
                    for (i = front; i<=rear; ++i)
                    {
                        printf("%d ,", queue[i]);
                    }
                }
            }break;
            case 4:
            {
                printf("\nExiting. . . \n");
                break;
            }
            default:
                printf("Invalid Input...  Please Try Again\n");
                main();
            }
    }while(choice<4);
}