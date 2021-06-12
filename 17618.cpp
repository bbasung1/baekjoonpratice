#include <iostream>
#include <string>
using namespace std;
int main(){
	long long a;
	cin>>a;
	long long cnt=0;
	for(int i=1;i<=a;i++){
		string c=to_string(i);
		long long sum=0;
		for(char &d:c){
			sum+=d-'0';
		}
		if(i%sum==0){
			cnt++;
		}
	}
	cout<<cnt<<"\n";
}