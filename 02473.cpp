#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    long long *b=new long long[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    sort(b,b+a);
    long long res=3000000000;
    long long c[3];
    for(int i=0;i<a-2;i++){
        int lo=i+1,hi=a-1;
        while(lo<hi){
            if(abs(b[lo]+b[i]+b[hi])<res){
                c[0]=b[lo];c[1]=b[i];c[2]=b[hi];res=abs(b[lo]+b[i]+b[hi]);
                if(b[lo]+b[i]+b[hi]==0){
                    break;
                }
            }
            if(b[lo]+b[i]+b[hi]<0){
                lo++;
            }else{
                hi--;
            }
        }
    }
    sort(c,c+3,less<int>());
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<"\n";
}