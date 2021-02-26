#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int sum=0;
    int cur=a.find(',');
    int pre=0;
    while(cur!=string::npos){
        string b=a.substr(pre,cur-pre);
        sum+=stoi(b);
        pre=cur+1;
        cur=a.find(',',pre);
    }
    sum+=stoi(a.substr(pre,cur-pre));
    cout<<sum<<"\n";
}