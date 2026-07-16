#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int k;
    cin>>k;
    priority_queue<int,vector<int>,greater<int>>minh;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        minh.push(x);
        if(minh.size()>k)
        {
            minh.pop();
        }
     
    }
    cout<<minh.top()<<endl;

}