#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int c=51;
    for(int i=0;i<=b.length()-a.length();i++){
        int d=0;
     for(int j=0;j<a.length();j++){
         if(a[j]!=b[i+j]){
             d++;
         }
     }
     if(d<c){
         c=d;
     }   
    }
    cout<<c<<"\n";
}