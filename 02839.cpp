#include <iostream>
using namespace std;
int main(){
	int a,b=0;
	cin>>a;
	while(a%5!=0&&a>=3){
		a-=3;
		b++;
	}
	cout<<a<<b<<"\n";
	b+=a/5;
	a%=5;
	cout<<a<<b<<"\n";
	if(a!=0){
		cout<<"-1\n";
	}
	else{
		cout<<b<<"\n";
	}
}
