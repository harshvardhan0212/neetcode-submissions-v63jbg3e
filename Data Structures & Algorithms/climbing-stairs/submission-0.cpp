class Solution {
public:
int solveusingrecursion(int n,int sum){

    if(sum==0){
        return 1;
    }
    if(sum <0){
        return 0;
    }
    int ans1=0,ans2=0;
     ans1 = ans1 +solveusingrecursion(n,sum-1);

     ans2 =ans2 +solveusingrecursion(n,sum-2);

    return ans1+ans2;
}
int solveusingmemo(int n,int sum,vector<int>&dp){

    if(sum==0){
        return 1;
    }
    if(sum <0){
        return 0;
    }
    if(dp[sum]!= -1){
        return dp[sum];
    }
    int ans1=0,ans2=0;
     ans1 = ans1 +solveusingmemo(n,sum-1,dp);

     ans2 =ans2 +solveusingmemo(n,sum-2,dp);
    dp[sum]=ans1 +ans2;
    return ans1+ans2;
}
    int climbStairs(int n) {

        vector<int>dp(n+1,-1);
        int sum =n;

        int result = solveusingmemo(n,sum,dp);
        return result;
        

    }
};