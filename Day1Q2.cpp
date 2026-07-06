#include<bits/stdc++.h>
using namespace std;
int main(){

    int h=0,m=0;
    int hrs=0;
    cin>>h>>m;
    cin>>hrs;

     int h1=0,m1=0;
    //int hrs=0;
    cin>>h1>>m1;

    int total1=(h+hrs)*60+m;
    int total2=(h1*60)+m1;
    cout<<total2-total1<<endl;
}