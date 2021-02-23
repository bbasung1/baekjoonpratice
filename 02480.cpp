#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[0]==a[1]&&a[1]==a[2]){
		cout<<10000+1000*a[0]<<"\n";
	}
	else if(a[0]==a[1]){
		cout<<1000+a[0]*100<<"\n";
	}
	else if(a[1]==a[2]){
		cout<<1000+a[1]*100<<"\n";
	}
	else{
		cout<<a[2]*100<<"\n";
	}

}
