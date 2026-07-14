#include <bits/stdc++.h>
using namespace std;
 vector<bool>isPrime(1000001,true);
vector<int>getPrime(int n){
    vector<int>prime;
   
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]) prime.push_back(i);
    }
    return prime;
}
int getsumofdigits(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {

    int l, r;
    cin>>l>>r;
    vector<int>ans=getPrime(r);
     
    for(int i=l;i<=r;i++){
        if(isPrime[i]){
            int sum=getsumofdigits(i);
            if(isPrime[sum]) cout<<i<<" ";
        }
    }

}

/*
Binary Search Inbuilt Function in cpp is lower_bound and upper_bound
lower_bound returns the first position where the element can be inserted without violating the order.
binary_search returns true if the element is present in the array, otherwise false.
*/