#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int count=1;
    while(1){
        int a,b,c;
        char m='a';
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0){
            break;
        }
        int d;
        if(c==-1){
            d=a*a+b*b;
            m='c';
        }
        else{
            d=a==-1?b:a;
            d==a?m='b':m='a';
            d=c*c-d*d;
        }
        cout<<"Triangle #"<<count<<endl;
        if(d<=0){
            cout<<"Impossible."<<endl;
        }
         else{
             float k=sqrt(d);
             cout << fixed;
             cout.setf(ios::showpoint);
             cout.precision(3);
             cout<<m<<" = "<<k<<endl;
         }
         count++;
         cout<<endl;
    }
}