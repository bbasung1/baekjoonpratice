#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> a;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        a.push_back(i);
    }
    k--;
    int b=k;
    cout<<"<";
    while(a.size()!=0){
        b%=int(a.size());
        cout<<a[b%a.size()]<<(a.size()==1?">\n":", ");
        a.erase(a.begin()+b);
        b+=k;
    }
}