/*
There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

Input
The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.

Output
Print a single integer — the answer to the problem.

Examples
input
3
RRG
output
1
input
5
RRRRR
output
4
input
4
BRBG
output
0
*/

#include<iostream>

using namespace std;

int main(){
    int numStones; // number of stones on table
    int answer=0; //minimum number of stones to take from the table so that any two neighboring stones had different colors.
    char color[50];//color of all stones.

    cin >> numStones;

    cin >> color;
    

    /*
    logic:
        1. if current stone and next stone has same color and next stone and stone after next stone has differ in color then remove current stone from table.
        2. if current stone , next stone ans well as stone after next stone all have same in color ther remove current and next stone from table.
        3. if current stone and next stone both is in differnt color then do nothing.
    */
    for(int i=0;i<numStones - 1;i++){
       if(color[i]==color[i+1] ){
            if(color[i+1]!=color[i+2]){
                answer++;
                i++;
            }
            else{
                answer += 2;
                i++;
            }
       }
    }

    //printing the answer of minimum number of stones to take from the table so that any two neighboring stones had different colors.
    cout << answer;
    return 0;
}
