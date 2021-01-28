#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int c;
    cin>>n;
    vector <int> a;
    for(n;n>0;n--){
        int b;
        cin>>b;
        a.push_back(b);
    }
    if(2*a[1]==a[0]+a[2]){
        c=a[1]-a[0];
        cout<<a.back()+c<<endl;
    }
    else if(a[1]*a[1]==a[0]*a[2]){
        c=a[1]/a[0];
        cout<<a.back()*c<<endl;
    }
}