#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int min=1000001;
    int max=-1000001;
    for(n;n>0;n--){
        int b;
        cin>>b;
    if(min>b)min=b;
    if(max<b)max=b;
    }
    cout<<min<<" "<<max<<endl;
}