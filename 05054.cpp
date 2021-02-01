#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(a;a>0;a--){
        int b;
        cin>>b;
        vector <int> c;
        for(b;b>0;b--){
            int d;
            cin>>d;
            c.push_back(d);
        }
        cout<<2*(*max_element(c.begin(),c.end())-*min_element(c.begin(),c.end()))<<endl;
    }
}