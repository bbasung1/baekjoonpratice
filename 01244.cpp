#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
   int a;
   cin>>a;
   bool *b=new bool[a];
   for(int i=0;i<a;i++){
      cin>>b[i];
   }
   int d;
   cin>>d;
   while(d--){
      int e,f;
      cin>>e>>f;
      if(e==1){
         for(int i=f-1;i<a;i+=f){
            b[i]=!b[i];
         }
      }
      else if(e==2){
            f--;
            b[f]=!b[f];
         for(int i=1;!(b[f+i]^b[f-i]||(f+i>a-1||f-i<0));i++){
            b[f+i]=!b[f+i];
            b[f-i]=!b[f-i];
         }
      }
   }
   for(int i=0;i<a;i++){
      cout<<b[i]<<" ";
      if((i+1)%20==0){
         cout<<"\n";
      }
   }
   cout<<"\n";
}