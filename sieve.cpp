#include<bits/stdc++.h>
using namespace std;
vector<bool> help(int n){
    vector<bool>prime(n,0);

    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<=n;i++){


        if(prime[i]){


            for(int j=i*i;j<=n;j++) prime[i]=0;

        }

    }


    return prime;

}
int main(){
 int n;
 cin>>n;

 vector<bool>prime= help(n);




}
