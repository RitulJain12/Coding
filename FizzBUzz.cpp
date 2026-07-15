#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>ar(n,0);
    for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=0;i<n;i++){
        if(ar[i]%3==0) cout<<"Three"<<" ";
        else if(ar[i]%5==0) cout<<"Five"<<" ";
        else if (ar[i]%3==0 && ar[i]%5==0) cout<<"ThreeFive"<<" ";
        else cout<<ar[i]<<" ";
    }
    return 0;
}