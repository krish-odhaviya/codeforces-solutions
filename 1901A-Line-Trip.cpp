#include<bits/stdc++.h>
using namespace std;
int main(){
    //number of test cases.
    int TAT;cin >> TAT;

    while(TAT--){
        // n indicates total number of gas station.
        // x indicates final destination i.e. from 0 to x
        int n,x;
        cin >> n >> x;
        //array a with n elements indicates n gas station points located within the path (from 0 to x).
        int a[n];

        int min_gas = 0; //minumum number of gas required.
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            if(i == 0){
                min_gas = a[i] - 0;
            }
            if(i == n-1 && (x - a[i])*2 > min_gas){
                        min_gas = (x - a[i])*2;
            }
            if(i > 0){
                if(a[i] - a[i-1] > min_gas){
                    min_gas = a[i] - a[i-1];
                }
            }
        }

        cout << min_gas << endl;

    }
    return 0;
}