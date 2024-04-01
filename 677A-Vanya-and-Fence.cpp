#include<iostream>
using namespace std;

int main(){
    int n,h,w=0;
    cin >> n >> h;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(auto i : a){
        if(i > h){
            w+=2;
        }
        else{
            w++;
        }
        n--;
    }

    cout << w;

    return 0;
}