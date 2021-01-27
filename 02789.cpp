#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b="CAMBRIDGE";
    for(char& k : b){
        cout<<a<<endl;
        a.erase(find(a.begin(), a.end(), k));
    }
    cout<<a;
}