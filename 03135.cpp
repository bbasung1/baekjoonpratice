#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	long long ans=abs(a-b);
	int c;
	cin>>c;
	while(c--){
		int d;
		cin>>d;
		ans=min(abs(d-b)+1,ans);
	}
	cout<<ans<<"\n";
}