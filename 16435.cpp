#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,l;
  cin>>n>>l;
  int *p=new int[n];
  for(int i=0;i<n;i++){
    cin>>p[i];
  }
  sort(p,p+n);
  for(int i=0;i<n;i++){
    if(p[i]>l){
      break;
    }
    l++;
  }
  cout<<l<<"\n";
}