#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,4,5,6,6,6,10};
    vector<int>brr={7,5,3,2,-2,-5};

    vector<int>ans;

    int n=arr.size();
    int m=brr.size();
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(arr[i]>brr[j]) ans.push_back(brr[j--]);
        else ans.push_back(arr[i++]);

    }

    if(i==n){
        while(j>=0) ans.push_back(brr[j--]);
    }
    else   while(i<n) ans.push_back(arr[i++]);



    for(auto &a:ans) cout<<a<<endl;
}