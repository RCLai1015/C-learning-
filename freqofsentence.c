#include <stdio.h>
//Ricky Lai 2019/4/5
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET    "\x1b[0m"
int main()
{
    char string[100];
    int c = 0;
    int count[26] = {0};
    int k;
    printf("Enter a string\n");
    gets(string);
    while (string[c] != '\0') {
        if (string[c] >= 'A' && string[c] <= 'Z'){
            string[c] = string[c] + 32;
        }    
        if (string[c] >= 'a' && string[c] <= 'z') {
            k = string[c] - 'a';
            count[k]++;
        }
        c++;
   }
    for (c = 0; c < 26; c++){
        if(c%3==0){
            printf("\n");
        }
        printf(GREEN "%c ",c+'a');
        printf(ANSI_COLOR_RESET "occurs");
        if(count[c]>0){
            printf(RED " %d ", count[c]);
        } 
        else{
            printf(ANSI_COLOR_RESET " %d", count[c]);
        }
        printf(ANSI_COLOR_RESET " times in the string. " ANSI_COLOR_RESET);
    }
    return 0;
}