#include <iostream>
using namespace std;
int main(){
	int a=0;
	int b;
	for(int i=0;i<8;i++){
		int c;
		cin>>c;
		if(i==0||a==3){
			b=c;
			continue;
		}
		if((c<b&&a==2)||(c>b&&a==1)){
			a=3;
		}
		else if(c<b){
			a=1;
		}
		else if(c>b){
			a=2;
		}
		b=c;
	}
	if(a==2){
		cout<<"ascending\n";
	}
	else if(a==1){
		cout<<"descending\n";
	}
	else if(a==3){
		cout<<"mixed\n";
	}
}
