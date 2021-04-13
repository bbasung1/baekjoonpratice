#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    int a;
    cin>>a;
    cin.ignore();
    while(a--){
        string b;
        getline(cin,b);
        int sid=0;
        while(true){
            int fid=b.find(" ",sid);
            if(fid==-1){
                reverse(b.begin()+sid,b.end());
                break;
            }
            else{
                reverse(b.begin()+sid,b.begin()+fid);
            }
            sid=(fid+1);
        }
        cout<<b<<"\n";
    }
}