#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	cin>>a;
	int c=0;
	while(a.length()!=1){
		int sum=0;
		for(char &d:a){
			sum+=d-'0';
		}
		c++;
		a=to_string(sum);
	}
	cout<<c<<"\n";
	int f=stoi(a);
	if(f%3==0){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
}
