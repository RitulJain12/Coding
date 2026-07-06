#include<bits/stdc++.h>
using namespace std;
int main(){


    int a=0,b=0;
    cin>>a>>b;
   
    long long l=((a-1)*(a)/2)*(a-1)*(a)/2;
    long long r=((b)*(b+1)/2)*(b)*(b+1)/2;
     cout<<l<<" "<<r<<" "<<r-l<<endl;
}