#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b=0;
    int d[10]={0,};
    for(char k:a){
        int e=k-'0';
        if(e==9){
            e=6;
        }
        d[e]++;
    }
    d[6]-=d[6]/2;
    b=*max_element(d,d+10);
    cout<<b<<"\n";
}