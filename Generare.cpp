#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n==1) {
        cout<<"5";
        return 1;
    }
    else if(n==2)
    {
        cout<<"6";
        return 1;
    }
    else{
        vector<int>a;
        a.push_back(5);
        a.push_back(6);
        for(int i=2;i<n;i++){
            a.push_back(a.back()+a[a.size()-2]);
        }
        for(auto &e:a){
            cout<<e<<" ";
        }
        return 0;
    }


}