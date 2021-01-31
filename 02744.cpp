#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(islower(a[i])){
            a[i]=toupper(a[i]);
        }
        else if(isupper(a[i])){
            a[i]=tolower(a[i]);
        }
    }
    cout<<a<<endl;
}