#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class birth{
    public:
    int dd,mm,yy;
    string name;
};
bool com(birth &m,birth &n){
    if(m.yy!=n.yy){
        return m.yy<n.yy;
    }
    else if(n.mm!=m.mm){
        return m.mm<n.yy;
    }
    else{
        return m.dd<n.dd;
    }
}
int main(){
    int a;
    cin>>a;
    birth *b=new birth[a];
    for(int i=0;i<a;i++){
        cin>>b[i].name>>b[i].dd>>b[i].mm>>b[i].yy;
    }
    sort(b,b+a,com);
    cout<<b[a-1].name<<"\n"<<b[0].name<<"\n";
}