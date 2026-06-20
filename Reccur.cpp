//for more optimization dp can be used
#include<bits/stdc++.h>
using namespace std;
int help(int idx,int n,int end,vector<int>&vl,int prv){

    if(idx==n) return prv==end;

    int ans=0;

    for(int i=0;i<vl.size();i++){
        if(vl[i]!=prv){
            ans+=help(idx+1,n,end,vl,vl[i]);
        }
    }

  return ans;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();

    vector<int>v(n,0);
     int i=0;
    while(i<n){
        int a;cin>>a;
        v[i++]=a;
    }
    int end;cin>>end;

  cout<<help(1,n,end,v,1)<<endl;

}