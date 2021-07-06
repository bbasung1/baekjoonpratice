#include <iostream>
#include <algorithm>
using namespace std;
long long pw(long long b,int c){
	if(b==1){
		return c;
	}
	else{
		long long x=pw(b/2,2);
		if(b%2==0){
			return (x*x)%1000000007;
		}
		else{
			return (x*x*2)%1000000007;
		}
	}
}
int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
	int a;
	cin>>a;
	while(a--){
		long long b;
		cin>>b;
		if(b<=2){
			cout<<"1\n";
			continue;
		}
		cout<<pw(b-2,2)<<"\n";
	}
}