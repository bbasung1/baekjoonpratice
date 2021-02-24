#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(a;a>0;a--){
		int b;
		cin>>b;
		int i=0;
		while(b!=0){
			if(b%2==1){
				cout<<i<<" ";
			}
			i++;
			b/=2;
		}
		cout<<"\n";
	}
}
