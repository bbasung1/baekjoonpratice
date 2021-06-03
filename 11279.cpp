#include <queue>
#include <iostream>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    priority_queue <int> b;
        int c;
    while(a--){
        cin>>c;
        if(c==0){
            if(b.empty()){
                cout<<"0\n";
            }
            else{
                cout<<b.top()<<"\n";
                b.pop();
            }
        }
        else{
            b.push(c);
        }
    }
}