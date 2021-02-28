#include<iostream>
#include<string>
using namespace std;
int dolmen(int a, int b) {
    int sum, i, j, k;
    sum = 0;
    /*for (i = 0; i < a + b; i++) {
        for (j = 0; j < a + b-1; j++) {
				cout<<i<<" "<<j<<" "<<j*(j+1)/2<<"\n";
                sum+=(j*(j+1)/2)+1;
        }
    }*/
	sum=(a+b)*((a+b)*(a+b-1)/2);
    return sum;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<dolmen(a,b)<<"\n";
}
