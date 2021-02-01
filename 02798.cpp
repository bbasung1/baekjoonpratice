#include <iostream>
using namespace std;
int main(){
    int a[100];
    int b,c;
    cin>>b>>c;
    int d=0;
    int e=0;
    for(int i=0;i<b;i++){
        cin>>a[i];
    }
    for(int i=0;i<b-2;i++){
        for(int j=i+1;j<b-1;j++){
            for(int k=j+1;k<b;k++){
                e=a[k]+a[j]+a[i];
                if(e>=d&&e<=c){
                    d=e;
                }
            }
        }
    }
    cout<<d<<endl;
}