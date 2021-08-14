#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    bool tmp=0;
    int res=b+1;
    while(c--){
        int hper;
        cin>>hper;
        int week;
        for(int i=0;i<d;i++){
            cin>>week;
            if(week>=a){
                if(res>hper*a){
                    res=hper*a;
                    tmp=1;
                }
            }
        }
    }
    if(tmp){
        cout<<res<<"\n";
    }
    else{
        cout<<"stay home";
    }
}