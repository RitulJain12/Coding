#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int target;
    cin>>target;

    int ans=INT_MAX;

    if(binary_search(v.begin(),v.end(),target))
    {
        cout<<"Element is present in the array"<<endl;
        return 0;
    }

    auto it=lower_bound(v.begin(),v.end(),target);
    if(it!=v.end()) ans=min(ans,*it-target);
    it++;
    if(it!=v.end()) ans=min(ans,*it-target);
    cout<<"Element is not present in the array"<<endl;
    cout<<"Closest element is: "<<ans<<endl;
}