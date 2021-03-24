#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b=99;
    if(a.length()>=3){
        for(int i=100;i<=stoi(a);i++){
            string c=to_string(i);
            //sort(c.begin(),c.end());
            if(2*(c[1]-'0')==(c[0]-'0')+(c[2]-'0')){
                b++;
            }
        }
    }
    else{
        cout<<a<<"\n";
        return 0;
    }
    cout<<b<<"\n";
}