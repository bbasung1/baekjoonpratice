#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
    int b,c;
    cin>>b>>c;
    long long mul=b*c;
    		int gcd;
		while(c!=0){
			gcd=b%c;
			b=c;
			c=gcd;
        }
        cout<<b<<" "<<mul/b<<"\n";
    }
}