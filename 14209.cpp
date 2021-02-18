#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	int sum=0;
	cin>>a;
	for(a;a>0;a--){
		string b;
		cin>>b;
		for(char &c:b){
			if(c=='X'){
				continue;
			}
			else if(c=='A'){
				sum+=4;
			}
			else if(c=='K'){
				sum+=3;
			}
			else if(c=='Q'){
				sum+=2;
			}
			else if(c=='J'){
				sum+=1;
			}
		}
	}
	cout<<sum<<"\n";
}
