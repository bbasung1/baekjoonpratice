#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	string b;
	cin>>a>>b;
	int sum=0;
	for(char &c:a){
		for(char &d:b){
			sum+=int(c-'0')*int(d-'0');
		}
	}
	cout<<sum<<"\n";
}
