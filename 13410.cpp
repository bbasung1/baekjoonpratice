#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
 int m,n;
 cin>>m>>n;
 int k=0;
 for(int i=1;i<=n;i++){
     string a=to_string(m*i);
     reverse(a.begin(),a.end());
     int b=stoi(a);
     if(k<b){
         k=b;
     }
 }  
 cout<<k<<"\n"; 
}