#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	cin>>a;
	int sum=0;
	for(char &b:a){
		sum+=3;
		if(b>=68&&b<=70){
			sum++;
		}
		else if(b>=71&&b<=73){
			sum+=2;
		}
		else if(b>=74&&b<=76){
			sum+=3;
		}
		else if(b>=77&&b<=79){
			sum+=4;
		}
		else if(b>=80&&b<=83){
			sum+=5;
		}
		else if(b>=84&&b<=86){
			sum+=6;
		}
		else if(b>=87&&b<=90){
			sum+=7;
		}

	}
	cout<<sum<<"\n";
}

