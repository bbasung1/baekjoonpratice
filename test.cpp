#include<iostream>
#include<string>
using namespace std;
int main(){
	int a;
	while((cin>>a)){
		if(a==EOF){
			break;
		}
		cout<<a<<"\n";
	}
}
