#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(a;a>=0;a--){
        cout<<a<<"\n";
        string b;
        getline(cin,b);
        int c=count(b.begin(),b.end(),'g');
        c+=count(b.begin(),b.end(),'G');
        int d=count(b.begin(),b.end(),'b');
        d+=count(b.begin(),b.end(),'G');
        if(c>d){
            cout<<b<<" is GOOD\n";
        }
        else if(c==d){
            cout<<b<<" is NEUTRAL\n";
        }
        else if(c<d){
            cout<<b<<" is A BADDY\n";
        }
    }
}