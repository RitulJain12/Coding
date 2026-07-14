
#include <bits/stdc++.h>
using namespace std;
int main(){
       
    int n;
    cin>>n;
    cin.ignore();
    vector<tuple<string,long long,char,string>>v(n);
    for(int i=0;i<n;i++){
        string name;
        long long time;
        char type;
        string id;
        cin>>name>>time>>type>>id;
        v[i]=make_tuple(name,time,type,id);
    }

    vector<string>ans;
      double asciisum=0;
      int asciicount=0;
    for(int i=0;i<n;i++){
        auto [name1,age,ascii,id]=v[i];
        if(age>20) ans.push_back(name1);
        if(id=="Female") {
            asciisum+=ascii-'0';
            cout<<ascii-'0'<<asciisum<<endl<<" ";
            asciicount++;
        }
      
    }
   for(auto &a:ans) cout<<a<<endl;
   if(asciicount==0) cout<<"0.00"<<endl;
     cout<<fixed<<setprecision(2)<<(asciisum/asciicount)<<endl;
  
    
}
