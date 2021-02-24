#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string a;
	string b;
	cin>>a>>b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	stoi(a)>stoi(b)?cout<<a<<"\n":cout<<b<<"\n";

}
