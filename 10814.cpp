#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
  int a;
  cin>>a;
  vector <string> t1[201];
  for(int i=0;i<a;i++){
    int c;
    string d;
    cin>>c>>d;
    t1[c].push_back(d);
  }
  for(int i=1;i<=200;i++){
    for(auto iter=t1[i].begin();iter!=t1[i].end();iter++){
      cout<<i<<" "<<*iter<<"\n";
    }
  }
}