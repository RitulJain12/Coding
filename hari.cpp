#include <bits/stdc++.h>
using namespace std;
int main() {
 string input;
 cin >> input;
 try {
 int n = stoi(input); // convert string to int
 if(n < 0) {
 cout << "error";
 return 0;
 }
 int cost = 0;
 if(n <= 2) {
 cost = n * 100;
 }
 else if(n <= 5) {
 cost = 2 * 100 + (n - 2) * 50;
 }
 else {
 cost = 2 * 100 + 3 * 50 + (n - 5) * 20;
 }
 cout << cost;
 }
 catch(logic_error& e) {
    cout<< "error";
 }
 return 0;
}