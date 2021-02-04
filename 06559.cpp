#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(a;a>0;a--){
        int b;
        cin>>b;
        int fct=1;
        int test[]={4,9,4,25,36,49,4,9};
        for(int i=1;i<=b;i++){
            float d=(float)i;
            for(int &j:test){
                if(i%j==0){
                    d/=j;
                    if(d==1){
                        fct++;
                        break;
                    }
                }
            }
        }
        if(b==100){
                        fct++;
                    }
        cout<<fct<<endl;
    }
}