#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a=0;
    int k=0;
    cin>>k;
    for(int i=0;i<k;i++){
        int b[4];
        cin>>b[0]>>b[1]>>b[2]>>b[3];
        int c[6];
        for(int j=0;j<6;j++){
            c[j]=count(b,b+4,j+1);
        }
        int d=*max_element(c,c+6);
        if(d==4){
            d=0;
            d=b[0]*5000+50000;
        }
        else if(d==3){
            d=0;
            d=max(b[0],b[1])*1000+10000;
        }
        else if(d==2&&count(c,c+6,2)==2){
            d=0;
            for(int j=0;j<7;j++){
                if(c[j]==2){
                    d+=500*(j+1);
                }
            }
            d+=2000;
        }
        else if(d==2&&count(c,c+6,2)==1){
            d=0;
            for(int j=0;j<6;j++){
                if(c[j]==2){
                    d+=100*(j+1);
                }
            }
            d+=1000;
        }
        else if(d==1){
            d=0;
            d+=*max_element(b,b+4)*100;
        }
        a=max(a,d);
        }
        cout<<a<<endl;
    }