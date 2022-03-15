#include <iostream>
#include <vector>
long long k=0;
using namespace std;
/*int fibonacci(int n) { // 호출
k++;
  if (n < 2) {
    return n;
  }  
  return fibonacci(n-2) + fibonacci(n-1);
}*/
int main(){
    int a;
    cin>>a;
    if(a==0){
        cout<<"0\n";
        return 0;
    }
    else if(a==1){
        cout<<"1\n";
        return 0;
    }
    vector<long long>b(a+1);
    b[1]=1,b[2]=3;
    for(int i=3;i<=a;i++){
        b[i]=(b[i-1]+b[i-2]+1);
    }
    cout<<b[a]%1000000007<<"\n";
    /*
    fibonacci(a);
    cout<<k<<"\n";*/
}