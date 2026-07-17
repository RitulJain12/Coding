class Solution {
  public:
    int cutRod(vector<int> &price) {
       int n=price.size();
       vector<int>dp(n+1,0);
      
       
       for(int i=1;i<=n;i++) dp[i]=price[i-1];
       
       for(int len=2;len<=n;len++){
           
           
           for(int j=1;j<=len/2;j++){
               
               dp[len]=max(dp[len],dp[j]+dp[len-j]);
               
           }
           
           
       }
       
       
       return dp[n];
     
        
    }
};