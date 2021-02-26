#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[5];
    int sum=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        sum+=(a[i]/5);
    }
    sort(a,a+5);
    cout<<sum<<"\n"<<a[2]<<"\n";
}