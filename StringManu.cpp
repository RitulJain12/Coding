#include<bits/stdc++.h>
using namespace  std;
int main(){
    string s;
    cin>>s;
    cin.ignore();
    s.pop_back();
   string x= s.substr(1);
    vector<int>val;
    string temp;
    stringstream ss(x);
    while(getline(ss,temp,',')){
        int a=temp[0]-48;
        val.push_back(a);
    }
    for(auto &a:val) cout<<a<<endl;
}