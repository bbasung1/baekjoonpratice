#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a!=1){
		
		if(a%2!=0){
			cout<<"0\n";
			return 0;
		}
		a/=2;
	}
	cout<<"1\n";
}
