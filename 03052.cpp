#include <iostream>
using namespace std;
int main(){
	int a[42]={0};
	int sum=0;
	for(int i=0;i<10;i++){
		int b;
		cin>>b;
		b=b%42;
		if(a[b]==0){
			a[b]++;
			sum++;
		}
	}
	cout<<sum<<"\n";
}
