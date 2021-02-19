#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(a;a>0;a--){
		string b;
		cin>>b;
		int sum[26]={0};
		int tot=0;
		for(char &c:b){
			int d=c-'A';
			if(d>=0&&d<=25){
				sum[d]=1;
			}
		}
		for(int i=0;i<26;i++){
			if(sum[i]==0){
				tot+=(i+65);
			}
		}
		cout<<tot<<"\n";
	}
}
