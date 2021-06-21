#include <iostream>
using namespace std;
int c[1001][1001];
int main() {
    long long a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=0;j<=a;j++){
            if(i==j||j==0){
                c[i][j]=1;
            }
            else{
                c[i][j]=(c[i-1][j]+c[i-1][j-1])%10007;
            }
        }
    }
    cout<<c[a][b];
}