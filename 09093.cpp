#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cin>>a;
    cin.ignore();
    while(a--){
        string b;
        getline(cin,b);
        for(int i=0;i<b.size();i++){
            if(b[i]==' '){
                for(int j=i-1;b[j]!=' '&&j>=0;j--){
            cout<<b[j];
        }
        cout<<" ";
            }
        }
            for(int j=b.size()-1;b[j]!=' '&&j>=0;j--){
                cout<<b[j];
            }
            cout<<"\n";
    }
}