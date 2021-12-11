#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class test{
    public:
    int count;
    int num;
    string firstcall;
};
int main(){
    int a,b;
    cin>>a>>b;
    vector<test>c(a+1);
    for(int i=0;i<a+1;i++){
        c[i].count=100010;
        c[i].num=i;
    }
    for(int i=0;i<b;i++){
        int d;
        string e;
        cin>>e>>d;
        if(c[d].count==100010){
            c[d].firstcall=e;
            c[d].count=0;
        }
        c[d].count++;
    }
    sort(c.begin(),c.end(),[](const test&i,const test&j){if(i.count==j.count){return i.num<j.num;} return i.count<j.count;});
    /*for(int i=0;i<a+1;i++){
        cout<<c[i].count<<" "<<c[i].num<<" "<<c[i].firstcall<<"\n";
    }*/
    cout<<c.front().firstcall<<" "<<c.front().num<<'\n';
}
