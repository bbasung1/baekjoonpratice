#include <iostream>
using namespace std;
int main(){
	long long a=0;
	long long b=1;
	int n;
	long long c;
	cin>>n;
	for(n;n>0;n--){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<a<<"\n";
}
