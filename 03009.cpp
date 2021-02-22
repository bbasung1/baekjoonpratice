#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[3];
	int b[3];
	for(int i=0;i<3;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<3;i++){
		if(count(a,a+3,a[i])==1){
			cout<<a[i]<<" ";
			break;
		}
	}
	for(int i=0;i<3;i++){
		if(count(b,b+3,b[i])==1){
			cout<<b[i]<<"\n";
			break;
		}
	}
	//count(a,a+3,a[0])==1?cout<<a[0]<<" ":cout<<a[1]<<" ";
	//count(b,b+3,b[0])==1?cout<<b[0]<<"\n":cout<<b[1]<<"\n";
}
