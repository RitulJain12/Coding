#include<bits/stdc++.h>
using namespace std;
void help( vector<int>&ans, vector<int>&sc,int k){
    unordered_map<int,int>mp;
    for(auto &s:sc){
        mp[s]++;
    }
    priority_queue<pair<int,int>>pq;
    unordered_map<int,int>idx;
    for(int i=0;i<sc.size();i++) {

       if(!idx.contains(sc[i])) idx[sc[i]]=i;
    }

    for(auto &p:mp){
       
        pq.push({p.second,idx[p.first]});
         if(pq.size()>k)pq.pop();
    }

   k--;
   while(pq.size()){
    cout<<k<<endl;
       ans[k]=sc[pq.top().second];
       pq.pop();
       k--;
   }
    
}
int main(){
    string x;
    getline(cin,x);
   // cin.ignore();
    int k;
    cin>>k;
    stringstream ss(x);
    string temp;
    vector<int>score;
    while(getline(ss,temp,',')){
        score.push_back(stoi(temp));
    }

    vector<int>ans(k,0);
    help(ans,score,k);
    for(auto &a:ans) cout<<a<<endl;

}