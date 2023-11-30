#include<stdio.h>
#include<string.h>

int main(){
    int number;
    scanf("%d",&number);

    char word[100];
    
    
    for(int i=0;i<number;i++){
       scanf("%s",&word);
        int wordLength = strlen(word);
        if(wordLength > 10){
            printf("%c%d%c\n",word[0],wordLength - 2,word[wordLength-1]);
        }
        else{
            printf("%s\n",word);
        }
        
    }
    
  
    return 0;
}

