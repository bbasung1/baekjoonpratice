#include <iostream>
#include <cmath>
using namespace std;
int main(){
    while(1){
        int a;
        cin>>a;
        if(a==0){
            break;
        }
        do{
            int b=0;
            for(int i=(int)log(a);i>=0;i--){
                b+=a/pow(10,i);
                a=a%(int)pow(10,i);
            }
            a=b;
        }while(a>=10);
        cout<<a<<endl;
    }
}