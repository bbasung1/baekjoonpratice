#include <iostream>
#include <string>
using namespace std;
void move(string &a,string &d){
            if(d.find('R')!=string::npos){
            a[0]++;
        }
        if(d.find('L')!=string::npos){
            a[0]--;
        }
        if(d.find('B')!=string::npos){
            a[1]--;
        }
        if(d.find('T')!=string::npos){
            a[1]++;
        }
}
int main(){
    string a,b;
    int c;
    cin>>a>>b>>c;
    while(c--){
        string pre1=a;
        string pre2=b;
        string d;
        cin>>d;
        move(a,d);
        if(a==b){
            move(b,d);
        }
        if(a[0]==64||a[0]==73||a[1]==48||a[1]==57||b[0]==64||b[0]==73||b[1]==48||b[1]==57){
            a=pre1;
            b=pre2;
        }
    }
    cout<<a<<"\n"<<b<<"\n";
}