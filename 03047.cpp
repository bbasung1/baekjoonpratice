#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int a[3];
    char b[4];
        cin>>a[0]>>a[1]>>a[2];
    cin>>b;
    sort(a,a+3);
    for(char &m:b){
        if(m=='A'){
            cout<<a[0]<<" ";
        }
        else if(m=='B'){
            cout<<a[1]<<" ";
        }
        else if(m=='C'){
            cout<<a[2]<<" ";
        }
    }
    cout << endl;
}