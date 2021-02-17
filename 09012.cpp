#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(a;a>0;a--){
		string b;
		string c;
		cin>>c;
		int f=0;
		for(char &d:c){
			if(d=='('){
				b+=d;
			}
			else{
				if(b[0]!='('){
					f=1;
					break;
				}
				else{
					b.erase(0,1);
				}
			}
		//cout<<b<<" "<<b.length()<<" "<<f<<"\n";
		}
		//cout<<b.length()<<" "<<f<<"\n";
		if(b.length()==0&&f==0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
