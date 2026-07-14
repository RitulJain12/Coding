/*
Question: Maximum People in a Balloon (Weight Constraint)
You are given:
• n → number of persons
• W[] → weights of persons
• Y → maximum capacity of the balloon
Task: Find the maximum number of people such that total weight ≤ Y.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> W(n);
    for(int i = 0; i < n; i++){
        cin >> W[i];
    }
    int Y;
    cin >> Y;

    sort(W.begin(), W.end());

    int total_weight = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(total_weight + W[i] <= Y){
            total_weight += W[i];
            count++;
        } else {
            break;
        }
    }

    cout << count << endl;
}