#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		for(int j=0;j<=2*a-1;j++){
			if(j<=a+i&&j>=a-i){
				cout<<"*";
			}
			else if(j<a-i&&j!=0){
				cout<<" ";
			}
            /*else{
                continue;
            }*/
		}
		cout<<"\n";
	}
}
