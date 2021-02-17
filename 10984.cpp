#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(a;a>0;a--){
		int b;
		cin>>b;
		int c=0;
		float d=0;
		for(int i=0;i<b;i++){
			int e;
			float f;
			cin>>e>>f;
			c+=e;
			d+=f*e;
		}
		cout.precision(2);
		cout<<c<<" "<<d/c<<"\n";
	}
}
