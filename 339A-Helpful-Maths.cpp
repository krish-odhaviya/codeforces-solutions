#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int i,j,x;

    cin >> s;

    if(s.length() == 1){
        cout << s;
    }
    else{

    for(i=0;i<(s.length()-2) ;i=i+2){
        x = i+2;
        for(j=i+2;j<s.length();j=j+2){
            if(int(s[j]) < int(s[x])){
                x = j;
            }
        }
        if(int(s[x]) < int(s[i])){
        char temp;
        temp = s[x];
        s[x] = s[i];
        s[i] = temp;
        }
        
    }

    cout << s;
    }
    return 0;
}