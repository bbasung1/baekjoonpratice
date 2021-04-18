#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int c[5]={0};
        if(b%10>5){
            c[4]+=10-(b%10);
            b+=c[4];
        }
        else{
            c[3]+=b%10;
            b-=c[3];
        }
        if(b%60>30){
            c[2]+=(60-(b%60))/10;
            b+=60-(b%60);
        }
        else{
            c[1]+=(b%60)/10;
            b-=b%60;
        }
        c[0]=b/60;
        for(int i=0;i<4;i++){
            cout<<c[i]<<" ";
        }
        cout<<c[4]<<"\n";        
    }
}