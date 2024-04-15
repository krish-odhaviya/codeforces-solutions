#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int n,a=0,d=0;
    string s;
    cin >> n;
    cin >> s;
    
    a = count(s.begin(),s.end(),'A');
    d = count(s.begin(),s.end(),'D');
    if(a > d){
        cout << "Anton\n";
    }
    else if(a < d){
        cout << "Danik\n";
    }
    else{
        cout << "Friendship\n";
    }
    
    return 0;
}