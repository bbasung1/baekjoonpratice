#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,c,d;
    string b;
    cin >> a;
    getchar();
    while(a--){
        c = d = 0;
        getline(cin,b);
        c+=count(b.begin(),b.end(),'g');
        c+=count(b.begin(),b.end(),'G');
        d+=count(b.begin(),b.end(),'b');
        d+=count(b.begin(),b.end(),'B');
        if(c>d){
            cout<<b<<" is GOOD\n";
        }
        else if(c==d){
            cout<<b<<" is NEUTRAL\n";
        }
        else if(c<d){
            cout<<b<<" is A BADDY\n";
        }
    }
    return 0;
}