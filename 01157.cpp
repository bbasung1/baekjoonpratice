#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
        string d;
        cin>>d;
        int a[26]={0};
        int max=0;
        int su=0;
        int ch;
        for(char &b:d){
                int c=b-'A';
                if(c>26){
                        c-=32;
                }
                a[c]++;
                if(max<a[c]){
                        max=a[c];
                        ch=c;
                        su=0;
                }
                else if(max==a[c]&&ch!=c){
                        su++;
                }
        }
        if(su!=0){
                cout<<"?\n";
        }
        else{
                cout<<(char)(ch+'A')<<"\n";
        }
}
