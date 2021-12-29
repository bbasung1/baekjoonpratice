#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		for(int j=0;j<=2*a-1;j++){
			if(j<i||j>(2*a)-i&&j!=0){
				cout<<" ";
			}
			else if(j>i&&j<(2*a)-i){
				cout<<"*";
			}
            /*else{
                continue;
            }*/
		}
		cout<<"\n";
	}
}