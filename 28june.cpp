#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;

        int maxi=(n+99)/100;

        int ans=INT_MAX;
       
          for(int car=0;car<maxi;car++){


            int bycar=car*x;

            int rem=max(0,(n-bycar+3)/4);

            ans=min(ans,100*car+y*rem);


             
          }
          cout<<ans;

    }
    
}