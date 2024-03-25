#include<stdio.h>
#include<string.h>

int main(){
    int n,k,hightPoint = 0,finalist = 0;

    scanf("%d%d",&n,&k);

    int points[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&points[i]);
        if(i == k-1){
            hightPoint = points[i];
        }
    }

    for(int i=0;i<n;i++){
        if(points[i]>=hightPoint && points[i]!=0){
            finalist+=1;
        }
        else{
             printf("%d",finalist);
             return 0;
        }
    }

    printf("%d",finalist);
    return 0;
}