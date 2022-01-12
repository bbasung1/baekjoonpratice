#include <iostream>
using namespace std;
int main(){
    long long b,c;
    cin>>b>>c;
    long long mul=b*c;
    		long long gcd;
		while(c!=0){
			gcd=b%c;
			b=c;
			c=gcd;
        }
        cout<<mul/b<<"\n";
}