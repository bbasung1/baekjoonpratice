#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    cin.ignore();
    stack<int> c;
    while(a--){
        string b;
        getline(cin,b);
        if(b=="pop"){
            if(c.size()==0){
                cout<<"-1\n";
                continue;
            }
            cout<<c.top()<<"\n";
            c.pop();
        }
        else if(b=="size"){
            cout<<c.size()<<"\n";
        }
        else if(b=="empty"){
            c.empty()?cout<<"1\n":cout<<"0\n";
        }
        else if(b=="top"){
            if(c.size()==0){
                cout<<"-1\n";
                continue;
            }
            cout<<c.top()<<"\n";
        }
        else{
            c.push(stoi(b.substr(5)));
        }
    }
}
