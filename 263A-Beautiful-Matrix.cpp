#include<iostream>
using namespace std;

int main(){
    // bool a[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,1},{0,0,0,0,0},{0,0,0,0,0}};
    bool a[5][5];
    int x,y,count=0;

    for(int i = 0 ; i < 5;i++)
    {
        for(int j=0;j<5;j++){
            cin >> a[i][j];
            if(a[i][j]!=0){
                x = i;
                y = j; 
            }
        }
        
    }

    while((x!=2 && y!=2) || (x!=2&&y==2) || (y!=2&&x==2))
    {
            if(x==2){
                a[x][y] = 0;
                y < 2 ? y++ : y--;
                a[x][y] = 1;
                count++;
            }
            else if(y==2)
            {
                a[x][y] = 0;
                x < 2 ? x++ : x--;
                a[x][y] = 1;
                count++;
            }
            else{
                a[x][y] = 0;
                y < 2 ? y++ : y--;
                a[x][y] = 1;
                count++; 
            }
        
    }

    cout << count;

    return 0;
}