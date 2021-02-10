#include <iostream>
using namespace std;
int main(){
    //cin.tie(0);cout.tie(0);ios::sync_with_stdio(0); 
    int a;
    scanf("%d",&a);
    for(a;a>0;--a){
        int b,c;
        scanf("%d %d",&b,&c);
        printf("%d",b+c);
    }
}