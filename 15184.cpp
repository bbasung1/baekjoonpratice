#include <iostream>
#include <string>
using namespace std;
int main(){
	int a[26]={0,};
	string b;
	getline(cin,b);
	for(char &c:b){
		if(c-'a'>=0&&c-'a'<=25){
			a[c-'a']++;
		}
		else if(c-'A'>=0&&c-'A'<=25){
			a[c-'A']++;
		}
	}
	for(int i=0;i<26;i++){
		cout<<(char)(i+'A')<<" | ";
		for(int j=0;j<a[i];j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
