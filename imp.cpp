/*
You are given N bank transactions.
Each transaction has:
Sender Receiver Amount Timestamp
A transaction is considered fraud if:
• Sender, Receiver, and Amount are same
• Timestamp difference ≤ 60 seconds
Find and print all such fraud transactions.
Example Input
5
ANU JON 200.50 1000
ANU JON 200.50 1050
RAM SAM 300.00 2000
ANU JON 200.50 2000
RAM SAM 300.00 2050
C++ Code
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    cin.ignore();
    vector<tuple<string, string, double, long long>> transactions(n);
    for(int i = 0; i < n; i++){
        string sender, receiver;
        double amount;
        long long timestamp;
        cin >> sender >> receiver >> amount >> timestamp;
        transactions[i] = make_tuple(sender, receiver, amount, timestamp);
    }

    unordered_map<string, vector<pair<long long,int>>> mp;

    for(int i = 0; i < n; i++){
        auto [sender, receiver, amount, timestamp] = transactions[i];
        string key = sender + "#" + receiver + "#" + to_string(amount);
        mp[key].push_back({timestamp, i});
    }

    vector<bool> isFraud(n, false);

    for(auto &[key, vec] : mp){
        sort(vec.begin(), vec.end());
        for(int i = 1; i < vec.size(); i++){
            if(vec[i].first - vec[i-1].first <= 60){
                isFraud[vec[i].second] = true;
                isFraud[vec[i-1].second] = true;
            }
        }
    }

    cout << "Fraud Transactions:\n";
    for(int i = 0; i < n; i++){
        if(isFraud[i]){
            auto [sender, receiver, amount, timestamp] = transactions[i];
            cout << sender << " " << receiver << " " << amount << " " << timestamp << "\n";
        }
    }
}
