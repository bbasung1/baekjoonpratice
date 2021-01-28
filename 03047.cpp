#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int > a;
    char b[3];
    for(int i=0;i<3;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    cin>>b;
    sort(a.begin(),a.end());
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
}