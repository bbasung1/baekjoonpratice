#include <iostream>
using namespace std;
int main(){
	int max=0;
	int pass=0;
	for(int i=0;i<4;i++){
		int a,b;
		cin>>a>>b;
		pass+=(b-a);
		if(max<pass){
			max=pass;
		}
	}
	cout<<max<<"\n";
}
