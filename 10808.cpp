#include<iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b[26];
    for(int i=0;i<26;i++){
        b[i]=0;
    }
    for(char &c:a){
        b[c-'a']++;
    }
    for(int i=0;i<26;i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
}