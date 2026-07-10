#include<bits/stdc++.h>
using namespace std;

int main() {
    string x;
    getline(cin, x);

    int h = 0, m = 0, s = 0;

    stringstream ss(x);
    string token;
    int cnt = 0;

    while (getline(ss, token, ':')) {
        if (cnt == 0) {
            h = stoi(token);
        }
        else if (cnt == 1) {
            m = stoi(token);
        }
        else {
            s = stoi(token.substr(0, 2));
            string ampm = token.substr(3, 2);

            if (ampm == "AM" && h == 12)
                h = 0;
            else if (ampm == "PM" && h != 12)
                h += 12;
        }
        cnt++;
    }

    cout << h << " " << m << " " << s << endl;
}