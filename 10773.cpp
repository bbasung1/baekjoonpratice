#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> a;
    short b;
    cin>>b;
    while(b--){
        int c;
        cin>>c;
        if(c==0){
            if(a.size()!=0){
            a.pop_back();
            }
            else{
                continue;
            }
        }
        else{
            a.push_back(c);
        }
    }
    int sum=0;
    for(int i:a){
        sum+=i;
    }
    cout<<sum<<"\n";
}