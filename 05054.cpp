#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(a;a>0;a--){
        int b;
        cin>>b;
        int min=101;
        int max=-1;
        for(b;b>0;b--){
            int d;
            cin>>d;
            if(min>d)min=d;
            if(max<d)max=d;
        }
        cout<<2*(max-min)<<endl;
    }
}