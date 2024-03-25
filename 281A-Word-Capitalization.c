#include<stdio.h>
#include<string.h>
int main(){
    char word[1000];
    scanf("%s",&word);

    char substring[1000];

    strncpy(substring,word + (1),strlen(word));

    printf("%c%s",toupper(word[0]),substring);
    return 0;

}