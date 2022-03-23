// GO TO STATEMENT

/* Program to print numbers from 1 to 10
   using go to statement 
*/

#include <stdio.h>

int main(){
    int number=1;

    printnumber:
    printf("%d ", number);

    number++;
    if (number<=10){
    goto printnumber;
    }
}
