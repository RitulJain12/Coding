#include<bits/stdc++.h>
using namespace std;
int dfs(int src,
        unordered_set<int>& used,
        unordered_map<int,int>& idx,
        vector<int>& arr,
        vector<int>& brr){

    used.insert(src);

    int cnt = 1;

    int nxt = idx[brr[src]];

    if(!used.contains(nxt))
        cnt += dfs(nxt,used,idx,arr,brr);

    return cnt;
}
int main(){
    vector<int>arr={20,50,10,30,40};
    vector<int>brr={40,10,20,30,50};

    unordered_map<int,int>idx;

    for(int i=0;i<arr.size();i++) idx[arr[i]]=i;

    int ans=0;

    unordered_set<int>used;

    for(int i=0;i<arr.size();i++){

    if(!used.contains(i)){

        int cycle = dfs(i,used,idx,arr,brr);

        ans += cycle - 1;
    }
}
    cout<<ans<<"Is";
    
}