#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int TAT;cin >> TAT;
    while(TAT--){
        int n,k;
        cin >> n >> k;
        int a[n];
        //getting values of box number from the user.
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }

        // cout << is_sorted(a,a+n);

        if(k == 1 && !is_sorted(a,a+n)){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}