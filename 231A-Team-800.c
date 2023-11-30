#include<stdio.h>
#include<string.h>


int main(){
    int numProblems;
    int petyaView,vasyaView,tonyaView;

    int solveTheProblem = 0;

    scanf("%d",&numProblems);

    for(int i=0;i<numProblems;i++){
        scanf("%d\t%d\t%d",&petyaView,&vasyaView,&tonyaView);
        int sum = petyaView + vasyaView + tonyaView;
        if(sum == 2 || sum == 3){
           solveTheProblem+=1;
        }
    }

    printf("%d",solveTheProblem);
    return 0;
}