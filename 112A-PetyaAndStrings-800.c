#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char a[100],b[100];

    scanf("%s%s",&a,&b);

    int result = stricmp(a,b);
    if(result == 0){
        printf("%d",result);
    }
    else if(result == -1){
        printf("%d",result);
    }
    else if(result == 1){
        printf("%d",result);
    }
    else{
        printf("null");
    }
    return 0;
}