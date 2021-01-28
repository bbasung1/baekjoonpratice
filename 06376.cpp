#include <iostream>
using namespace std;
int main(){
    int n=0;
    int k=1;
    long double e=1;
    cout<<"n"<<" "<<"e"<<endl<<"- -----------"<<endl;
    for(n;n<10;n++){
        if(n==0){
            e=1;
        }
        else{
            k*=n;
            e+=(long double)1/k;
        }
        cout.precision(10);
        if(n>=3){
            cout.setf(ios::showpoint);
        }
        cout<<n<<" "<<e<<endl;
    }
}