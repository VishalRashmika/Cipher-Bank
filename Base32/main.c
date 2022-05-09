// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// #include<stdlib.h>

// int count = 0;

// int main(){
//     const char *str = "It works by splitting the string into an array of individual characters, then using Array.reduce to iterate over each character. Normally reduce would return a single value, but in this case the single value happens to be an array, and as we pass over each character we append it to the last item in that array. Once the last item in the array reaches the target length, we append a new array item.";

//     printf("Entire string is %s\n", str);

//     for (int i = 0; i < (strlen(str) / 5); i++){
//         printf("%i : %s\n",i, (str + count));
//         count = count + 5;
//     }
    

//     return 0;
// }


// C program to divide a string
// in n equal parts
#include <stdio.h>
#include <string.h>
 
// Function to print n equal parts of str
void divideString(char* str, int n)
{
    int str_size = strlen(str);
    int i;
    int part_size;
 
    // Check if string can be divided in
    // n equal parts
    // if (str_size % n != 0) {
    //     printf("Invalid Input: String size");
    //     printf(" is not divisible by n");
    //     return;
    // }
 
    // Calculate the size of parts to
    // find the division points
    //part_size = str_size / n;
    part_size = 5;
    for (i = 0; i < str_size; i++) {
        if (i % part_size == 0)
            printf("\n");
        printf("%c", str[i]);
    }
}
 
int main()
{
    // length od string is 28
    char* str = "Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World";
 
    // Print 4 equal parts of the string
    divideString(str, 5);
 
    getchar();
    return 0;
}

/*
NOTE:
space bin value
test base32 with a space

JBSWY3DPEBLW64TMMQQSAMJSGM======
"Hello World! 123"
*/

