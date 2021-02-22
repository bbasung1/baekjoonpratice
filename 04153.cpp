#include <iostream>
using namespace std;
int main(){
	while(1){
		int a[3];
		int max=0;
		int point=0;
		for(int i=0;i<3;i++){
			cin>>a[i];
			if(max<a[i]){
				max=a[i];
				point=i;
			}
		}
		if(a[0]+a[1]+a[2]==0){
			break;
		}
		int sum=0;
		for(int i=0;i<3;i++){
			if(i==point){
				continue;
			}
			sum+=a[i]*a[i];
		}
		if(max*max==sum){
			cout<<"right\n";
		}
		else{
			cout<<"wrong\n";
		}
	}
}
