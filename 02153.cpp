#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int sum=0;
    for(char &b:a){
        if(b>='a'&&b<='z'){
            sum+=(b-96);
        }
        else if(b>='A'&&b<='Z'){
            sum+=b-38;
        }
    }
    //cout<<sum<<"\n";
    if(sum==1){
        cout<<"It is a prime word.\n";
        return 0;
    }
    for(int i=2;i<=sqrt(sum);i++){
        if(sum%i==0){
            //cout<<i<<"\n";
            cout<<"It is not a prime word.\n";
            return 0;
        }
    }
        cout<<"It is a prime word.\n";
}