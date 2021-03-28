#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main(){
    cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    cin.ignore();
    queue<int> c;
    while(a--){
        string b;
        getline(cin,b);
        if(b=="pop"){
            if(c.size()==0){
                cout<<"-1\n";
                continue;
            }
            cout<<c.front()<<"\n";
            c.pop();
        }
        else if(b=="size"){
            cout<<c.size()<<"\n";
        }
        else if(b=="empty"){
            c.empty()?cout<<"1\n":cout<<"0\n";
        }
        else if(b=="front"){
            if(c.size()==0){
                cout<<"-1\n";
                continue;
            }
            cout<<c.front()<<"\n";
        }
        else if(b=="back"){
            if(c.size()==0){
                cout<<"-1\n";
                continue;
            }
            cout<<c.back()<<"\n";
        }
        else{
            c.push(stoi(b.substr(5)));
        }
    }
}
