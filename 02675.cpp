#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(a;a>0;a--){
		int b;
		string c;
		cin>>b>>c;
		for(char &d:c){
			for(int i=0;i<b;i++){
				cout<<d;
			}
		}
		cout<<"\n";
	}
}
