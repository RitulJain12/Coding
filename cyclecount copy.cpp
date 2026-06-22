#include<bits/stdc++.h>
using namespace std;
int main(){
     string x;
     getline(cin,x);
     cin.ignore();
     string temp;
     stringstream ss(x);
     vector<vector<int>>ans;
     while(getline(ss,temp,',')){
         vector<int>a;
         string temp2=temp.substr(1,temp.size()-2);
         stringstream pp(temp2);
         string val;

         while(getline(pp,val,',')){
            a.push_back(stoi(val));
         }
         ans.push_back(a);
     }

     for(auto v:ans){
        for(auto &e:v) cout<<e<<" ";
        cout<<endl;
     }
}