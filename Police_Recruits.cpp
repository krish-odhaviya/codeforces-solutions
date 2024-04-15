#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int c = 0,p = 0;

    for(int i =0;i<n;i++){
        cin >> a[i];
    }

    for(int i : a){
        if(i > 0) p += i;
        else if (i == 0) p = p;
        else if(i < 0 && p == 0) c = c + abs(i);
        else p--;
    }

    cout << c << endl;
    return 0;
}