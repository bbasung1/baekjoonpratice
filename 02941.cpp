#include <iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.length();i++){
        sum++;
        if(a[i]=='c'){
            if(a[i+1]=='='||a[i+1]=='-'){
                i+=1;
            }
            
            }
        else if(a[i]=='d'){
                if(a[i+1]=='z'&&a[i+2]=='='){
                    i+=2;
                }
                else if(a[i+1]=='-'){
                    i++;
                }
        }
    else if(a[i+1]=='j'){
        if(a[i]=='l'||a[i]=='n'){
            i++;
        }
    }
    else if(a[i+1]=='='){
        if(a[i]=='s'||a[i]=='z'){
            i++;
        }
    }
    }
    cout<<sum<<"\n";
}