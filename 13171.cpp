#include <iostream>
#include <algorithm>
using namespace std;
long long pw(long long a,long long b){
	if(b==1){
		return a%1000000007;
	}
	else{
		long long x=pw(a,b/2);
		if(b%2==0){
			return (x*x)%1000000007;
		}
		else{
			return (x*x%1000000007)*a%1000000007;
		}
	}
}
int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    long long a,b;
    cin>>a>>b;
    cout<<pw(a,b)<<"\n";
}