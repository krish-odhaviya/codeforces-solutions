#include<iostream>
#include<string>
#include<locale>
using namespace std;

int main(){
    string s;
    locale loc;
    int u=0,l=0;
    cin >> s;
    for(int i = 0;i < s.size();i++){
        if(isupper(s[i])) u++;
        else l++;
    }
    if((u > l)) {
        for(auto i : s){
            cout << toupper(i,loc);
        }   
    }     
    else {
         for(auto a : s){
            cout << tolower(a,loc);
        } 
    }
    return 0;
}