#include<iostream>
#include<vector>
using namespace std;


int climbStairs(int n){
     if (n <= 1) return 1;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int top_down(int n, vector<int>& dp){
    if(n<=1){
        return 1;
    }
    if(dp[n]!=-1) return dp[n];
    dp[n]=top_down(n-1,dp)+top_down(n-2,dp);
    return dp[n];

}
int climbStairt(int n){
    vector<int>dp(n+1,-1);
    return top_down(n,dp);
}

int main(){
    int n=5;
    cout<< "Ways: " << climbStairs(n);
    cout<<endl;
    cout<< "Ways: " << climbStairt(n);
}