#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t != 0){
    cin >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if((i + j)%2) cout << "..";
            else cout << "##";
        }
        cout << endl;
        for(int j = 0;j < n;j++){
            if((i + j)%2) cout << "..";
            else cout << "##";
        }
        cout << endl;
    }
    t--;
    }
    return 0;
}