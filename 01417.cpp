#include <iostream>
#include <queue>
using namespace std;
int main(){
    int num;
    cin>>num;
    int dasom;
    cin>>dasom;
    priority_queue <int> p;
    for(int i=0;i<num-1;i++){
        int a;
        cin>>a;
        p.push(a);
    }
    int cnt=0;
    if(num==1){
        cout<<"0\n";
        return 0;
    }
    while(p.top()>=dasom){
        int a=p.top();
        p.pop();
        cnt++;
        dasom++;
        p.push(a-1);
    }
    cout<<cnt<<"\n";
}