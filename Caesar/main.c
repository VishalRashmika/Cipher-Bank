#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX_VALUE 65536

char *caeser();
int key();
char *usage();
char *default_caeser(char text[]);

char text[MAX_VALUE];
char letter;
char result[MAX_VALUE];
int keys_array[5] = {3, 23, 0};
int custom_key;

int main(int argc, char *argv[]){

    if (argc != 2 ){
        printf("Error\n");
        usage();
    }
    else{
        if (strcmp(argv[1], "-c") == 0)
        {
            // To be tested about the key To be tested about the key To be tested about the key To be tested about the key To be tested about the key
            //custom_key = atoi(argv[2]);
            printf("Enter the text: ");
            fgets(text, MAX_VALUE, stdin);
            //key(custom_key);
            caeser(text);
        }
        
        else if(strcmp(argv[1], "-d") == 0){
            printf("Enter the text: ");
            fgets(text, MAX_VALUE, stdin);
            default_caeser(text);
        }
        else if(strcmp(argv[1], "-cd_code") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-jail") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-ellen") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-cutie") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "eiffel") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-wc_code") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-empty") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-baden_powell") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-any") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-see_you") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-i_see") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-easy") == 0){
            caeser();
        }
        else if(strcmp(argv[1], "-h") == 0){
            usage();
        }
        
    }
    //////////////////////////////////////////////////////////////////////////////////////
    
    return 0;
}

char *usage(){
    printf("Usage:\n");
    printf("-c : Custom_key\n");
    printf("-d : default (the shift by 3)\n");
    printf("-h : help\n");
    printf("Caesar Varients\n");
    printf("    -cd_code        : CD code (the shift is 1)\n");
    printf("    -jail           : Jail (the shift is 2)   \n"); 
    printf("    -ellen          : Ellen (the shift is 2)\n");
    printf("    -cutie          : Cutie (the shift is 3)\n");
    printf("    -eiffel         : Eiffel (the shift is 6)\n");
    printf("    -wc_code        : WC code (the shift is 6)\n");
    printf("    -empty          : Empty (the shift is 7)\n");
    printf("    -baden_powell   : Baden Powell (the shift is 14)\n");
    printf("    -any            : Any (the shift is 17)\n");
    printf("    -see_you        : See You (the shift is 18\n");
    printf("    -i_see          : I_See (the shift is 20)\n");
    printf("    -easy           : Easy (the shift is 21)\n");
    printf("examples:\n");
    printf("    ./caeser -c 4\n");
    printf("    ./caeser -d\n");
    printf("    ./caeser -ellen\n");
    printf("    ./caeser -easy\n");
}

char *caeser(char text[]){

    for (int i = 0; i <= strlen(text); i++)
    {
        // text[i] >= 65 && text[i] <= 90
        if ( (text[i] >= 65 && text[i] <= 87) || (text[i] >= 97 && text[i] <= 119))
        {
            letter = text[i] + keys_array[0];
            strncat(result, &letter, 1);
        }

        else if( ((text[i] >= 88 && text[i] <= 90) || (text[i] >= 120 && text[i] <= 122)) ){
            letter = text[i] - keys_array[1];
            strncat(result, &letter, 1);
        }

        //other characters
        //space    
        else if(text[i] == 32){
            letter = text[i] - keys_array[2];
            strncat(result, &letter, 1);
        }

        //numbers and symbols
        else if(text[i] >= 33 && text[i] <= 64){
            letter = text[i] - keys_array[2];
            strncat(result, &letter, 1);
        }

        //symbols
        else if(text[i] >= 123 && text[i] <= 126){
            letter = text[i] - keys_array[2];
            strncat(result, &letter, 1);
        }
        
    }
    printf("%s\n", result);
}

int key(int in_key){
    keys_array[0] = in_key;
}

char *default_caeser(char text[]){
    for (int i = 0; i <= strlen(text); i++)
    {
        // text[i] >= 65 && text[i] <= 90
        if ( (text[i] >= 65 && text[i] <= 87) || (text[i] >= 97 && text[i] <= 119))
        {
            letter = text[i] + 3;
            strncat(result, &letter, 1);
        }

        else if( ((text[i] >= 88 && text[i] <= 90) || (text[i] >= 120 && text[i] <= 122)) ){
            letter = text[i] - 23;
            strncat(result, &letter, 1);
        }

        //other characters
        //space    
        else if(text[i] == 32){
            letter = text[i] - 0;
            strncat(result, &letter, 1);
        }

        //numbers and symbols
        else if(text[i] >= 33 && text[i] <= 64){
            letter = text[i] - 0;
            strncat(result, &letter, 1);
        }

        //symbols
        else if(text[i] >= 123 && text[i] <= 126){
            letter = text[i] - 0;
            strncat(result, &letter, 1);
        }
        
    }
    printf("%s\n", result);
}

/*
Usage:
    -c : Custom_key
    -d : default (the shift by 3)
    -h : help
    Caesar Varients
        -cd_code        : CD code (the shift is 1)
        -jail           : Jail (the shift is 2)    
        -ellen          : Ellen (the shift is 2)
        -cutie          : Cutie (the shift is 3)
        -eiffel         : Eiffel (the shift is 6)
        -wc_code        : WC code (the shift is 6)
        -empty          : Empty (the shift is 7)
        -baden_powell   : Baden Powell (the shift is 14)
        -any            : Any (the shift is 17)
        -see_you        : See You (the shift is 18)
        -i_see          : I_See (the shift is 20)
        -easy           : Easy (the shift is 21)
examples:
    ./caeser -c 4
    ./caeser -d
    ./caeser -ellen
    ./caeser -easy
*/

/*
-c shoud be tested to argv[2] as the key
*/

/*
BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP BACKUP 



*/