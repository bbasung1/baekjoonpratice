#include <iostream>
using namespace std;

int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
	int a;
	cin>>a;
	while(a--){
        //cout<<a<<"\n";
		int b,c;
		cin>>b>>c;
		cout<<(b+c)*((c+b)*(c+b-1)/2)<<"\n";
	}
}