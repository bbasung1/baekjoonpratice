#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	cin>>a;
	string b;
	cin>>b;
	int sum=0;
	for(char &c:b){
		sum+=c-'0';
	}
	cout<<sum<<"\n";
}
