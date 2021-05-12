#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    if(b=="*"){
        cout<<1;
        for(int i=0;i<a.size()+c.size()-2;i++){
            cout<<0;
        }
        cout<<"\n";
    }
    else{
        if(a.size()==c.size()){
            cout<<2;
            for(int i=0;i<a.size()-1;i++){
                cout<<0;
            }
            cout<<"\n";
        }
        else{
            int max=a.size()>c.size()?a.size():c.size();
            for(int i=max;i>0;i--){
                if((i==a.size())||i==c.size()){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
            cout<<"\n";
        }
    }
}