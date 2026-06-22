#include<bits/stdc++.h>
using namespace std;

vector<int> par;
vector<int> dis;
vector<vector<pair<int,int>>> graph;

int dija(int src,int des){

    dis[src]=0;

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    pq.push({0,src});

    while(!pq.empty()){

        auto [d,node]=pq.top();
        pq.pop();

        if(d>dis[node]) continue;

        for(auto &nbr:graph[node]){

            int v=nbr.first;
            int w=nbr.second;

            if(d+w<dis[v]){

                dis[v]=d+w;
                par[v]=node;

                pq.push({dis[v],v});
            }
        }
    }

    return dis[des];
}

int main(){

    int n,m;
    cin>>n>>m;

    graph.resize(n);
    dis.assign(n,INT_MAX);
    par.assign(n,-1);

    cin.ignore();

    while(m--){

        string temp;
        getline(cin,temp);

        stringstream ss(temp);

        string line;
        vector<int> val;

        while(getline(ss,line,',')){
            val.push_back(stoi(line));
        }

        int u=val[0];
        int v=val[1];
        int w=val[2];

        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    int src,des;
    cin>>src>>des;

    int res=dija(src,des);

    cout<<"Minimum Distance = "<<res<<"\n";

    vector<int> path;

    for(int cur=des;cur!=-1;cur=par[cur])
        path.push_back(cur);

    reverse(path.begin(),path.end());

    cout<<"Path : ";

    for(int x:path)
        cout<<x<<" ";

    cout<<"\n";
}