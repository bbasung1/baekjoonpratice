#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b=1;
	int c=1;
	for(int i=0;b<=a;i+=6){
		c++;
		b+=i;
		if(b>=a){
			break;
		}
		cout<<b<<"\n";
	}
	cout<<c<<"\n";

}
