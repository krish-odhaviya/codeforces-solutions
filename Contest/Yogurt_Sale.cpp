/*
The price of one yogurt at the "Vosmiorochka" store is a
 burles, but there is a promotion where you can buy two yogurts for b
 burles.

Maxim needs to buy exactly n
 yogurts. When buying two yogurts, he can choose to buy them at the regular price or at the promotion price.

What is the minimum amount of burles Maxim should spend to buy n
 yogurts?

Input
The first line contains a single integer t
 (1≤t≤104) — the number of test cases.

The first and only line of each test case contains three integers n
, a
, and b
 (1≤n≤100
, 1≤a,b≤30
) — the number of yogurts Maxim wants to buy, the price for one yogurt, and the price for two yogurts on promotion.

Output
For each test case, print in a separate line the minimum cost of buying n
 yogurts at "Vosmiorochka".

Example
input 
4
2 5 9
3 5 9
3 5 11
4 5 11
output 
9
14
15
20
Note
In the third test case of the example, it is more advantageous to buy three yogurts for 15
 burles than two for 11
 and one for 5
.

In the fourth test case of the example, you need to buy four yogurts, each for 5
 burles.


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int TAT;
    cin >> TAT;
    while(TAT--){
        int n,a,b;
        cin >> n >> a >> b;
        int d = (a*2 < b ? a*2 : b);
        cout << (n/2) * d + (n%2) * a << endl;

    }
    return 0;
}