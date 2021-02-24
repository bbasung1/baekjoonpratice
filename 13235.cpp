#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string a;
	cin>>a;
	string b=a;
	reverse(b.begin(),b.end());
	a==b?cout<<"true"<<"\n":cout<<"false"<<"\n";
}
