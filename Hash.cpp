#include<bits/stdc++.h>
using namespace std;

struct Ex{
    string s,r;
    double amount;
    long long time;
};

void help(vector<Ex>& temp, int n){

    unordered_map<string, vector<pair<long long,int>>> mp;


    for(int i=0;i<n;i++){
        string key = temp[i].s + "#" +
                     temp[i].r + "#" +
                     to_string(temp[i].amount);

        mp[key].push_back({temp[i].time, i});
    }

    vector<bool> frd(n,false);

    for(auto &[key, vec] : mp){

        sort(vec.begin(), vec.end());

        for(int i=1;i<vec.size();i++){
            if(vec[i].first-vec[i-1].first <=60) {
                frd[vec[i].second]=1;
                   frd[vec[i-1].second]=1;
            }
        }
    }

    cout << "Fraud Transactions:\n";

    for(int i=0;i<n;i++){
        if(frd[i]){
            cout << temp[i].s << " "
                 << temp[i].r << " "
                 << temp[i].amount << " "
                 << temp[i].time << "\n";
        }
    }
}

int main(){

    int n;
    cin >> n;
    cin.ignore();

    vector<Ex> temp(n);

    for(int i=0;i<n;i++){

        string line;
        getline(cin,line);

        stringstream ss(line);

        ss >> temp[i].s
           >> temp[i].r
           >> temp[i].amount
           >> temp[i].time;
    }

    help(temp,n);
}