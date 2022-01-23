#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>b(a);
    vector<long long>dp(a+1,0);
    vector<int>cost(4);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    for(int i=1;i<=a;i++){
        dp[i]=b[i-1];
        cost[i-1]=b[i-1];
        //cout<<"dp["<<i<<"]="<<dp[i]<<"\n";
            //cout<<"dp[i]"<<i<<" "<<dp[i]<<"\n";
        for(int j=1;j<=a;j++){
            if(i-j<=0){
                break;
            }
            dp[i]=max(dp[i],dp[i-j]+cost[j-1]);
            //cout<<"dp[i]"<<i<<" "<<dp[i]<<"\n";
        }
    }
    cout<<dp[a]<<"\n";
}