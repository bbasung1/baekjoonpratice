#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(a;a>0;--a){
        int c;
        cin>>c;
        int sum=0;
        int *b=new int[c];
        for(int i=0;i<c;++i){
            cin>>b[i];
            sum+=b[i];
        }
        sum/=c;
        int pp=0;
        for(int i=0;i<c;++i){
            if(b[i]>sum){
                ++pp;
            }
        }
        delete [] b;
        float k=(float)pp/c;
        printf("%.3f%%\n",k*100);
    }
}