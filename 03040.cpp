#include <iostream>
using namespace std;
int main(){
	int a[9];
	int sum=0;
	for(int i=0;i<9;i++){
		cin>>a[i];
		sum+=a[i];
	}
	for(int i=0;i<8;i++){
		for(int j=i+1;j<9;j++){
			if(sum==100+a[i]+a[j]){
				for(int k=0;k<9;k++){
					if(k==i||k==j){
						continue;
					}
					else{
						cout<<a[k]<<"\n";
					}
				}
			}
		}
	}
}
