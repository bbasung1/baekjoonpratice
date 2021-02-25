#include <iostream>
using namespace std;
int main(){
    int a[3];
    int b[3];
    int c,d;
    scanf("%d : %d : %d",&a[0],&a[1],&a[2]);
    scanf("%d : %d : %d",&b[0],&b[1],&b[2]);
    c=a[0]*60*60+a[1]*60+a[2];
    d=b[0]*60*60+b[1]*60+b[2];
    c>d?cout<<(3600*24-c)+d<<"\n":cout<<d-c<<"\n";
}