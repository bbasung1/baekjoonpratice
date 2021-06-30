#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a;
    cin>>a;
    bool *win=new bool[a+1];
    win[1]=false;
    win[2]=true;
    win[3]=false;
    for(int i=4;i<=a;i++){
        if(min(win[i-1],win[i-3])){
            win[i]=false;
        }
        else{
            win[i]=true;
        }
    }
    if(win[a]){
        cout<<"SK\n";
    }
    else{
        cout<<"CY\n";
    }
}