#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	double x=sqrt((pow(b,2)+pow(c,2)));
	cout<<int(b*a/x)<<" "<<int(c*a/x)<<"\n";
}
