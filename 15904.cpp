#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    string b="UCPC";
    int d=0;
    for(char &c:b){
        int test=a.find(c,d);
        if(test==string::npos){
            cout<<"I hate UCPC\n";
            return 0;
        }
        else{
            d=test;
        }
    }
    cout<<"I love UCPC\n";
}