#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class score{
    public:
    string name;
    int guk;
    int young;
    int su;
};
bool cop(score m, score n){
    if(m.guk!=n.guk){
        return m.guk>n.guk;
    }
    else{
        if(m.young!=n.young){
            return m.young<n.young;
        }
        else{
            if(m.su!=n.su){
                return m.su>n.su;
            }
            else{
                return m.name<n.name;
            }
        }
    }
}
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    score *b=new score[a];
    for(int i=0;i<a;i++){
        cin>>b[i].name>>b[i].guk>>b[i].young>>b[i].su;
    }
    sort(b,b+a,cop);
    for(int i=0;i<a;i++){
        cout<<b[i].name<<"\n";
    }
    delete []b;
}