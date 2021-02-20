#include <iostream>
#include <string>
using namespace std;
int main(){
	while(1){
		int a;
		string b;
		cin>>a;
		if(a==0){
			break;
		}
		b=to_string(a);
		int sum=1;
		for(char &c:b){
			int d=c-'0';
			sum++;
			if(d==0){
				sum+=4;
			}
			else if(d==1){
				sum+=2;
			}
			else{
				sum+=3;
			}
		}
		cout<<sum<<"\n";
	}
}
