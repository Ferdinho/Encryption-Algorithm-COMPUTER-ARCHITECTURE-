// This program will input a word and an integer value as input values.
// The integer value indicates the number of position each letter of the word has been moved down.

#include <stdio.h>
#include <string.h>


int main() {

   char theWord[20];
    int number;
    char d;
    //asking user the word
    printf("Enter a word :");
    scanf("%s",theWord);
    // asking user a number
    printf("Enter a number :");
    scanf("%d",&number);

    char *source = theWord;
    int length = (int)strlen(source);

    for (int i = 0; i < length; i++) {
        //getting the number in the ascii table to help me print the correct character
        int c = (int) source[i]+number;
        if (c>90 && c<97){
            c= (c-90)+65-1;
        }
        if (c>122){
            c =(c-90)+65-1;
        }
        d = (char) (c);
        //printing the right format
        if(i==0) {
           printf("Encrypted text:%c", d);
        }
        else{
            printf("%c",d);

        }

    }
    return 0;
}