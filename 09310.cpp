#include <iostream>
#include <cmath>
using namespace std;
int main(){
	while(1){
		int a;
		int b[3];
		cin>>a;
		if(a==0){
			break;
		}
		for(int i=0;i<3;i++){
			cin>>b[i];
		}
		if(b[1]*2==b[0]+b[2]){
			cout<<(a*(2*b[0]+((a-1)*(b[1]-b[0]))))/2<<"\n";
		}
		else if(b[1]*b[1]==b[0]*b[2]){
			cout<<(long long)(b[0]*((pow(b[1]/b[0],a)-1)/((b[1]/b[0])-1)))<<"\n";
		}
	}
}
