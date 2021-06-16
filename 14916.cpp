#include <iostream>
using namespace std;
int main(){
	int a,b=0;
	cin>>a;
	while(a%5!=0&&a>=2){
		a-=2;
		b++;
	}
	b+=a/5;
	a%=5;
	if(a!=0){
		cout<<"-1\n";
	}
	else{
		cout<<b<<"\n";
	}
}
