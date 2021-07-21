#include <iostream>
#include <algorithm>
using namespace std;
long long pw(unsigned long long a,unsigned long long b){
	if(b==1){
		return a%1000000007;
	}
	else{
		unsigned long long x=pw(a,b/2);
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
    unsigned long long a,b;
    cin>>a>>b;
    cout<<pw(a,b)<<"\n";
}