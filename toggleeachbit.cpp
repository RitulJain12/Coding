/* Toggle Each Bit  means chnage 0 to 1 and 1 to 0 like 5 to 2*/
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin >> n;
     string binary = bitset<32>(n).to_string();
      // convert to binary string
      //remove leading zeros
     binary.erase(0, binary.find_first_not_of('0'));

     for (char &c : binary) {
         c = (c == '0') ? '1' : '0'; // toggle each bit
     }
     cout << binary;
     int toggled_n=stoi(binary, nullptr, 2); // convert back to decimal
     cout<<toggled_n;

}