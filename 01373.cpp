#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	string a;
	cin>>a;
	string b;
	if(a.length()%3!=0){
		a.insert(0,3-a.length()%3,'0');
	}
	for(int i=0;i<a.length()/3;i++){
		string c=a.substr(3*i,3);
		cout<<c<<"\n";
		int d=0;
		for(int j=0;j<3;j++){
			if(c[j]=='1'){
				d+=pow(2,2-j);
			}
		}
		b+=to_string(d);
	}
	cout<<b<<"\n";
}
