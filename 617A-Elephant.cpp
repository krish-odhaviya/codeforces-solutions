/*
An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

Input
The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) — The coordinate of the friend's house.

Output
Print the minimum number of steps that elephant needs to make to get from point 0 to point x.

Examples
input
5
output
1
input
12
output
3
Note
In the first sample the elephant needs to make one step of length 5 to reach the point x.

In the second sample the elephant can get to point x if he moves by 3, 5 and 4. There are other ways to get the optimal answer but the elephant cannot reach x in less than three moves.
*/

#include<iostream>
using namespace std;

int main(){
    int x;  //coordinate of the friend's house.
    int steps=0; //number of steps that elephant needs to make to get from point 0 to point x.
    
    cin >> x;

    /*
    if distance is grater than 5 then we will cover distance of 5,
    if distance is > x then 5 , = 4 then 4 , = 3 then 3, = 2 then 2 ,= 1 then 1
    after covering distance we will chek how many distance to be covered to reach freinds house
    */
    while(x!=0){
        if(x >= 5){
            x -= 5;
            steps++;
        }
        else if(x == 4){
            x -= 4;
            steps++;
        }
        else if(x == 3){
            x -= 3;
            steps++;
        }
        else if(x == 2){
            x -= 2;
            steps++;
        }
        else{
            x -= 1;
            steps++;
        }
    }

    cout << steps;

    return 0;
}