#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
   // vector<pair<int,int>>vp;
     unordered_map<int,int>mp;
     unordered_map<int,int>Id;
    while(t--){

        int stId,sc;
       cin>>stId>>sc;
       mp[sc]++;
        Id[sc]=stId;
       //vp.push_back({stId,sc});
    }
    int req,k;
    cin>>req>>k;

    if(mp[req]>=k) cout<<Id[req];
    else cout<<"-1";

   
     
}