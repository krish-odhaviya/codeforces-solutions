/*
Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

Input
The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.

Output
Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

Examples
input
4 7
output
2
input
4 9
output
3
input
1 1
output
1
*/

#include<iostream>

using namespace std;

int main(){
    int limakWeight,bobWeight,years=0;

    //taking limak's and his big brother bob's weight from user(system).
    cin >> limakWeight >> bobWeight;

    //loop will be in executin untill weight of limak becomes larger than his big brother bob's weight.
    //every interation considered as 1 year
    while(limakWeight <= bobWeight){
        //limak's weight is tripled after every year.
        limakWeight *= 3;
        //bob's weight is doubled after every year.
        bobWeight *=2;
        //years denotes how many years it takes limak to gain larger weight than bob.
        years++;
    }

    //prints x years that required limak to become larger(in weight) comapre to his big brother bob.
    cout << years;

    return 0;
}
