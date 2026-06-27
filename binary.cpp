#include<bits/stdc++.h>
using namespace std;
int main(){

    string x;
    getline(cin,x);

    int tar;
    cin>>tar;
    string temp;
    stringstream ss(x);
    vector<int>v;
    while (getline(ss,temp,','))
    {
        v.push_back(stoi(temp));

    }

   auto it=lower_bound(v.begin(),v.end(),tar);
    if(it==v.begin() || it==v.end()) {
        cout<<"Not Present";
        return -1;
    }
     auto up=upper_bound(v.begin(),v.end(),tar);
     up--;
    if(it==v.begin()) {
        cout<<it-v.begin()<<" "<<it-v.begin()<<" 0";
        return 0;
    }
    
     cout<<it-v.begin()<<" "<<up-v.begin()<<" "<<up-v.begin()-(it-v.begin());

    

}