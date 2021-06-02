#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    cout<<"<";
    m--;
    int count=m;
    while(a.size()!=1){
        cout<<a[count]<<", ";
        a.erase(a.begin()+count);
        count=(count+m)%a.size();
    }
    cout<<a[0]<<">\n";
}