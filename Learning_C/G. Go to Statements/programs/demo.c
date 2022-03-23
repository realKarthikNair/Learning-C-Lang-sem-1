// GO TO STATEMENT

/* Program to print numbers from 1 to 10
   using go to statement 
*/

#include <stdio.h>

int main(){
    int number;

    for (int i=0; i<=10; i++){
        goto number;
    }

    number:
    printf("%d", number);
}
