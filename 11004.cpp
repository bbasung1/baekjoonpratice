#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
	long long a,b;
	cin>>a>>b;
	long long *c=new long long[a];
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	sort(c,c+a);
	cout<<c[b-1];
	delete []c;
}