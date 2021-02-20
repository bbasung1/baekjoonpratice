#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int min=1000001,max=0;
	for(a;a>0;a--){
		int d;
		cin>>d;
		if(min>d){
			min=d;
		}
		if(max<d){
			max=d;
		}
	}
	cout<<min*max<<"\n";
}
