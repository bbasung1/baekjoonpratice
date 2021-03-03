#include <iostream>
using namespace std;
int main(){
    int a[3];
    int b[3];
    scanf("%d:%d:%d",&a[0],&a[1],&a[2]);
    scanf("%d:%d:%d",&b[0],&b[1],&b[2]);
    int c[3]={b[0]-a[0],b[1]-a[1],b[2]-a[2]};
    for(int i=2;i>=1;i--){
    if(c[i]<0){
        c[i-1]--;
        c[i]+=60;
    }
    }
       if(c[0]<0){
        c[0]+=24;
    }
    printf("%02d:%02d:%02d\n",c[0],c[1],c[2]);
}