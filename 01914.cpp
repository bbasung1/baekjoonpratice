#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void hanoi(int num,char a,char b,char c){
	if(num==1){
		printf("%c %c\n",a,c);
	}else{
		hanoi(num-1,a,c,b);
		printf("%c %c\n",a,c);
		hanoi(num-1,b,a,c);
	}
}
int main(){
	int num;
	scanf("%d",&num);
	string cnt=to_string(pow(2,num));
	int x=cnt.find('.');
	cnt=cnt.substr(0,x);
	cnt[cnt.length()-1]-=1;
	cout<<cnt<<"\n";
	if(num<=20){
	hanoi(num,'1','2','3');
	}
}