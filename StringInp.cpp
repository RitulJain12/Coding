#include <bits/stdc++.h>
using namespace std;

int main() {

    string x;
    getline(cin, x);

    vector<vector<string>> inp;

    vector<string> temp;
    string curr;

    bool inString = false;

    for(char ch : x) {

        if(ch == '"') {

            if(inString) {
                temp.push_back(curr);
                curr.clear();
            }

            inString = !inString;
        }

        else if(inString) {
            curr.push_back(ch);
        }

        else if(ch == ']') {

            if(!temp.empty()) {
                inp.push_back(temp);
                temp.clear();
            }
        }
    }

    for(auto &row : inp) {
        for(auto &s : row) {
            cout << s << " ";
        }
        cout << "\n";
    }
}