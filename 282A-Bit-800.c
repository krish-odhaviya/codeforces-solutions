#include<stdio.h>
#include<string.h>

int main(){
    int n,x=0;
    char operation[4];

    scanf("%d",&n);
    
    for(int i = 0;i<n;i++)
    {
        scanf("%s",&operation);

        if(strcmp(operation,"X++") == 0){
            x++;
        }
        else if(strcmp(operation,"X--") == 0){
            x--;
        }
        else if(strcmp(operation,"++X") == 0){
            ++x;
        }
        else if(strcmp(operation,"--X") == 0){
            --x;
        }
    }

    printf("\n%d",x);

    return 0;
    
}

