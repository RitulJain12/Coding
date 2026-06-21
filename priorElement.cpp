#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>ar(n,0);

    for(int i=0;i<n;i++) cin>>ar[i];
    

    int prv=INT_MIN;
    int ans=0;
    for(int i=0;i<n;i++){
        prv=max(prv,ar[i]);
        if(ar[i]==prv)ans++;

    }
    cout<<ans;

}