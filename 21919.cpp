#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
	unsigned long long sum=1;
	int a;
	cin>>a;
	while(a--){
		int b;
		cin>>b;
		bool c=true;
		for(int j=2;j<=sqrt(b);j++){
			if(b%j==0){
				c=0;
				break;
			}
		}
		if(c&&sum%b!=0){
			sum*=b;
		}
		}
		if(sum==1){
		cout<<"-1\n";
		return 0;
	}
	cout<<sum<<"\n";
}