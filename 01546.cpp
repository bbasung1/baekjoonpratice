#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int max=0;
    int b[1000];
    for(int i=0;i<a;i++){
        cin>>b[i];
        if(b[i]>max){
            max=b[i];
        }
    }
    float sum=0;
    for(int i=0;i<a;i++){
        sum+=(float)b[i]/max*100;
    }
    sum/=a;
    cout<<sum<<"\n";
}