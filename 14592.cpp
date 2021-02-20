#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int max[4]={-1,51,179,0};
	for(int i=1;i<=a;i++){
		int b,c,d;
		cin>>b>>c>>d;
		int k=0;
		if(b>max[0]){
			k=1;
		}
		else if(b==max[0]){
			if(c<max[1]){
				k=1;
			}
			else if(c==max[1]){
				if(d<max[2]){
					k=1;
				}
			}
		}
		if(k==1){
			max[0]=b;
			max[1]=c;
			max[2]=d;
			max[3]=i;
		}
	}
	cout<<max[3]<<"\n";
}
