#include<iostream>
using namespace std;

int main(){
    int t;
    int a,b,c;
    cin >> t;
    while(t!=0){
        cin >> a >> b >> c;
        if(a < b && b < c){
            cout << "STAIR" << endl;
        }
        else if(b > a && b > c){
            cout << "PEAK" << endl;
        }
        else{
            cout << "NONE" << endl;
        }
        t--;
    }
    return 0;
}