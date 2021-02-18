#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(a;a>0;a--){
		int b,c;
		cin>>b>>c;
		long long mul=b*c;
		int min=b>c?c:b;
		int max=min==b?c:b;
		if(max%min==0){
			cout<<max<<"\n";
			continue;
		}
		int gcd;
		while(c!=0){
			gcd=b%c;
			b=c;
			c=gcd;
		}
		cout<<mul/b<<"\n";
	}
}
