#include <iostream>
using namespace std;
int main(){
	int n,l,d;
	cin>>n>>l>>d;
	int tot=d;
	for(int i=1;i<=n;i++){
		for(tot;tot<i*(5+l);tot+=d){
			//cout<<tot<<" "<<(l*i)+5*(i-1)<<" "<<i*(5+l)<<"\n";
			if(tot>=(l*i)+5*(i-1)&&tot<i*(5+l)){
				cout<<tot<<"\n";
				return 0;
			}
		}
	}
	/*if(tot>(l+5)*n-5){
		cout<<(l+5)*n-5<<"\n";
	}*/
	cout<<tot<<"\n";
}
