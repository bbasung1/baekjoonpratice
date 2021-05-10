#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class test{
    public:
    int x;
    int y;
};
int main(){
    int a;
    cin>>a;
    test *k=new test[a];
    for(int i=0;i<a;i++){
        cin>>k[i].x>>k[i].y;
    }
        for(int i=0;i<a;i++){
            int b=1;
        for(int j=0;j<a;j++){
            if(k[i].x<k[j].x&&k[i].y<k[j].y){
                b++;
            }
        }
        cout<<b<<" ";
    }
    delete []k;
}