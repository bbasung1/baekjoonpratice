#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    short a;
    cin>>a;
    for(short k=1;k<=a;k++){
        short b;
        cin>>b;
        vector <short> c;
        for(short i=0;i<b;i++){
            short d;
            cin>>d;
            c.push_back(d);
        }
        short e=0;
        sort(c.begin(),c.end());
        for(short i=0;i<c.size()-1;i++){
            if(c[i+1]-c[i]>e){
                e=c[i+1]-c[i];
            }
        }
        cout<<"Class "<<k<<"\nMax "<<c[c.size()-1]<<", Min "<<c[0]<<", Largest gap "<<e<<"\n";
    }
}