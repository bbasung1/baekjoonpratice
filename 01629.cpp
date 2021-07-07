#include <iostream>
#include <algorithm>
using namespace std;
long long pw(long long a,long long b,long long c){
	if(b==1){
		return a%c;
	}
	else{
		long long x=pw(a,b/2,c);
		if(b%2==0){
			return (x*x)%c;
		}
		else{
			return (x*x%c)*a%c;
		}
	}
}
int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<pw(a,b,c)<<"\n";
}