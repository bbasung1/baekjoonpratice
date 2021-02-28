#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b=a.length();
    cin>>a;
    int c=a.length();
    c>b?cout<<"no\n":cout<<"go\n";
}