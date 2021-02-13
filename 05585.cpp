#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[]={500,100,50,10,5,1};
    a=1000-a;
    int sum=0;
    for(int i=0;i<6;i++){
        int c=a/b[i];
        sum+=c;
        a-=c*b[i];
    }
    cout<<sum<<"\n";
}