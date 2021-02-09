#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b=0;
    int c=0;
    for(char k:a){
        b++;
        cout<<b<<"\n";
        if(k=='6'||k=='9'){
            c++;
        }
    }
    b-=c/2;
    cout<<b<<"\n";
}