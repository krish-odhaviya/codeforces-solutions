#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int n,a=0,d=0;
    string s;
    cin >> n;
    cin >> s;
    // cout << s << endl;
    if(s.length() == n){
       for(char i : s){
            if(i == 'A') a++;
            else d++;
       }
    }
    if(a > d){
        cout << "Anton" << endl;
    }
    else if(a < d){
        cout << "Danik" << endl;
    }   
    else{
        cout << "Friendship" << endl;
    } 
    return 0;
}