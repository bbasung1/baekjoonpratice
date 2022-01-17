#include <iostream>
using namespace std;
int main(){
    bool a[2][5];
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        if(!(a[0][i]^a[1][i])){
            cout<<"N\n";
            return 0;
        }
    }
    cout<<"Y\n";
}