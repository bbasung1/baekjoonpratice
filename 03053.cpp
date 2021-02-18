#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin>>a;
	cout<<fixed;
	cout.precision(6);
	cout.setf(ios::showpoint);
	cout<<double(M_PI*a*a)<<"\n"<<double(a*a*2)<<"\n";
}
