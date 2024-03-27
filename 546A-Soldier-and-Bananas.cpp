/*
A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

Input
The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

Output
Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

Examples
input
3 17 4
output
13
*/

#include<iostream>
using namespace std;

int main(){
    int k; //the cost of the first banana.
    int n; //initial number of dollars the soldier has.
    int w; //number of bananas he wants.
    int i=1; //he has to pay i·k dollars for the i-th banana.
    int d = 0;
    cin >> k >> n >> w;
    
    //interate in loop untill all banana will be purchased.
    while(w!=0){

        //total money soilder spend to buy banana
        d = d + (i * k);
        i++;
        w--;
    }

    if(d > n){
        //total money he spent minus total dollas he has = dollar soilder takes from his friend to buy banana.
        d = d - n;
        cout << d;
    }
    else{
        //if total dollar spend by soilder is less than total dollar he has mean he has enough money to buy banana he dont need to take money from his friend.
        cout << 0;
    }
    
    return 0;
}