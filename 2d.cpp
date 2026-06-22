#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin,s);

    vector<vector<int>> ans;
    vector<int> a;
    string curr;

    for(int i=1;i<s.size()-1;i++) {

        if(s[i]=='[') {
            a.clear();
            curr="";
        }

        else if(s[i]==',') {

            if(!curr.empty()) {
                a.push_back(stoi(curr));
                curr="";
            }
        }

        else if(s[i]==']') {

            if(!curr.empty()) {
                a.push_back(stoi(curr));
                curr="";
            }

            ans.push_back(a);
        }

        else {
            curr.push_back(s[i]);
        }
    }

    for(auto &v:ans) {
        for(int x:v)
            cout<<x<<" ";
        cout<<endl;
    }
}