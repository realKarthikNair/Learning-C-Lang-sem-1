// Demonstrating conditional compilation

#include <stdio.h>
#define PI 5

int main()
{
    #if (PI==3)
        printf("Correct value!");
    #else
        #undef PI
        #define PI 3
        printf("Correct value assigned!");
    #endif
}

// // Demonstrating conditional compilation

// #include <stdio.h>
// #define PI 3.14

// int main()
// {
//     double pi=PI;
//     printf("%f\n",pi);
//     if (pi==3.14)
//     {
//         printf("Correct value!");
//     }
//     else
//     {
//         #undef PI
//         #define PI 3.14
//         printf("Correct value assigned!");
//     }
// }
