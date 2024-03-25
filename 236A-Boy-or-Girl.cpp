#include<iostream>
using namespace std;
int main(){
    string name;
    string temp ="";
    int i,j;
    bool flag;
    
    cin >> name;

    temp=name[0];
    for(i = 1;i < name.length();i++){
        for(j = 0;j<temp.length();j++){
            // cout << i << ":" << name[i] << '\t' << j <<":"<< temp[j] << endl;
            if(temp[j] == name[i]){
                flag = 1;
                break;
            }
            else{
                flag = 0;
            }
        }
        if(flag == 0){
            temp = temp + name[i];
        }
    }

    if(temp.length()%2  == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}