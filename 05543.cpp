#include <iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int m1=a[0]>a[1]?(a[1]>a[2]?a[2]:a[1]):(a[0]>a[2]?a[2]:a[0]);
    int m2=a[3]>a[4]?a[4]:a[3];
    cout<<m1+m2-50<<"\n";
}