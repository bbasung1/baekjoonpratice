#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a%2==1){
		cout<<((a/2)+1)*((a/2)+2)<<"\n";
	}
	else{
		cout<<((a/2)+1)*((a/2)+1)<<"\n";
	}
}
