#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[10]={93,181,245,214,315,36,185,138,216,295};
    sort(a,a+10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}