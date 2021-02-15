#include <iostream>
#include <string>
using namespace std;
int main(){
    int a[20];
    int b,c;
    cin>>b>>c;
    string t;
    for(int i=0;i<b-1;i++){
        getline(cin,t,',');
        a[i]=stoi(t);
    }
    cin>>a[b-1];
    for(int i=0;i<c;i++){
        for(int j=0;j<b-(i+1);j++){
            a[j]=a[j+1]-a[j];
        }
    }
    for(int i=0;i<(b-c-1);i++){
        cout<<a[i]<<",";
    }
    cout<<a[b-c-1]<<"\n";
}