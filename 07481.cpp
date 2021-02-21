#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(a;a>0;a--){
		int a,b,c;
		cin>>a>>b>>c;
		int max,min,t1=0,t2=0;
		max=a<b?b:a;
		min=max==a?b:a;
		//cout<<max<<" "<<min<<"\n";
		while(c%max!=0&&c>=min){
			c-=min;
			t1++;
			//cout<<t1<<" "<<c<<"\n";
		}
		t2+=c/max;
		c%=max;
		if(c!=0){
			cout<<"Impossible\n";
		}
		else if(max==a){
			cout<<t2<<" "<<t1<<"\n";
		}
		else if(max==b){
			cout<<t1<<" "<<t2<<"\n";
		}
	}
}
