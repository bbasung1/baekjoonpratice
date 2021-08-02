#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int *b=new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int ans=0;
    int tmp=0;
    for(int i=0;i<a;i++){
        if(b[i]==1){
            tmp++;
            ans+=tmp;
        }
        else{
            tmp=0;
        }
    }
    cout<<ans<<"\n";
}