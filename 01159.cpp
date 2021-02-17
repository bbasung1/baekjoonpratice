#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b[26]={0};
	for(a;a>0;a--){
		string c;
		cin>>c;
		int d=c[0]-'a';
		b[d]++;
	}
	for(int i=0;i<26;i++){
		if(b[i]>=5){
			cout<<(char)(i+'a');
			a=2;
		}
	}
	if(a==2){
		cout<<"\n";
	}
	else{
		cout<<"PREDAJA\n";
	}
}
