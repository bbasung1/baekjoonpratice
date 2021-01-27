#include<iostream>
#include<string>
using namespace std;
int main(){
    string b;
    for(int i=0;i<5;i++){
        b.append(to_string(i));
    }
    cout<<b;
    
}