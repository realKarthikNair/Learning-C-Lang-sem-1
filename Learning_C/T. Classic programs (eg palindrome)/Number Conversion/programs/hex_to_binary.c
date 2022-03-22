// Write a program to convert a hexadecimal number into a binary number

#include <stdio.h>
#include <string.h>

int main()
{
    char num_in_hex[100];

    printf("Enter a hexadecimal number(shouldn't exceed 100 digits): ");
    scanf("%s", num_in_hex);

    // length of the hexadecimal number is the iterative count
    long int iter=strlen(num_in_hex);

    // store binary equivalent of the hexadecimal number here
    // This is better than printing in each iteration since incase a non-hex character homes in between , we can throw an "invalid character message without printing the preceding characters"
    char num_in_binary[400]="\0";
    char invalid_error[1];

    for (int i=0; i<iter; i++)
    {
        switch (num_in_hex[i])
        {
        case '0':
            strcat(num_in_binary,"0000");
            break;
        case '1':
            strcat(num_in_binary,"0001");
            break;
        case '2':
            strcat(num_in_binary,"0010");
            break;
        case '3':
            strcat(num_in_binary,"0011");
            break;
        case '4':
            strcat(num_in_binary,"0100");
            break;
        case '5':
            strcat(num_in_binary,"0101");
            break;
        case '6':
            strcat(num_in_binary,"0110");
            break;
        case '7':
            strcat(num_in_binary,"0111");
            break;
        case '8':
            strcat(num_in_binary,"1000");
            break;
        case '9':
            strcat(num_in_binary,"1001");
            break;
        case 'A':
        case 'a':
            strcat(num_in_binary,"1010");
            break;
        case 'B':
        case 'b':
            strcat(num_in_binary,"1011");
            break;
        case 'C':
        case 'c':
            strcat(num_in_binary,"1100");
            break;
        case 'D':
        case 'd':
            strcat(num_in_binary,"1101");
            break;
        case 'E':
        case 'e':
            strcat(num_in_binary,"1110");
            break;
        case 'F':
        case 'f':
            strcat(num_in_binary,"1111");
            break;
        default:
            invalid_error[0]=num_in_hex[i];           
            i=iter;break;
        }
    }  
    if (invalid_error[0] != '\0')
    {
        printf("Character %c is NOT a hex character, aborting!!!\n",invalid_error[0]);
    }
    else
    {
        printf("%s in binary is ", num_in_hex);
        printf("%s\n",num_in_binary);
    }
}