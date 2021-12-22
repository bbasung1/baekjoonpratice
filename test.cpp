#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    vector <int>a={0, 0, 0, 0, 0, 0};
    vector <int>b={38, 19, 20, 40, 15, 25};
    int c=0,d=0;
    for(int i=0;i<6;i++){
        if(find(b.begin(),b.end(),a[i])!=b.end()){
            c++;
            d++;
        }
        else if(a[i]==0){
            c++;
        }
    }
    if(c==0){
        c++;
    }
    if(d==0){
        d++;
    }
    cout<<7-c<<" "<<7-d<<"\n";
}