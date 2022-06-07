// #include <stdio.h>

// int main()
// {
//     static int n = 9, queue[10], front=-1, rear=-1, choice=0, item;
//     printf("\nA Queue of size 10 has been declared\n");
//     do
//     {
//         printf("\nEnter 1 to Enqueue\n");
//         printf("\nEnter 2 to Dequeue\n");
//         printf("\nEnter 3 to traverse\n");
//         printf("\nEnter 4 to exit\n");
//         printf("\nEnter choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//             case 1:
//             {
//                 if ((front==rear+1)||((front==0)&&(rear==n-1)))
//                 {
//                     printf("Overflow\n");break;
//                 }
//                 else
//                 {
//                     if (front==-1)
//                     {
//                         front=rear=0;
//                     }
//                     else if(rear==n-1)
//                     {
//                         rear=0;
//                     }
//                     printf("Enter element to be enqueued: ");
//                     scanf("%d", &queue[++rear]);
//                 }
//             }
//             case 2:
//             {
//                 if((front==-1)&&(rear==-1))
//                 {
//                     printf("Underflow\n");break;
//                 }
//                 else
//                 {
//                     item = queue[front];
//                     printf("%d  dequeued successfully\n", item);
//                     if (front==rear)
//                     {
//                         front=rear=-1;
//                     }
//                     else if (front==n-1)
//                     {
//                         front=0;
//                     }
//                     else
//                     {
//                         front++;
//                     }
//                 }
//             }
//             case 3:
//             {
                
//             }
//         }
//     }while(choice<4);
// }