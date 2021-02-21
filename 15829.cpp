#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin>>a;
	string b;
	cin>>b;
	long long sum=0;
	for(int i=0;i<a;i++){
		int d=b[i]-'a'+1;
		sum+=d*pow(31,i);
		//cout<<sum<<"\n";
	}
	cout<<sum%1234567891<<"\n";
}
