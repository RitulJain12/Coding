#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
     int a=m;
    vector<pair<int,int>>graph[n];
     cin.ignore();
     while(a--){
        string temp;
      getline(cin,temp);
       string line;
       stringstream ss(temp);
       vector<int>val;
       while(getline(ss,line,',')){
         val.push_back(stoi(line));
       }

       graph[val[0]].push_back({val[1],val[2]});
       graph[val[1]].push_back({val[0],val[2]});

     }
   
     int src,des;
     cin>>src>>des;
   
}