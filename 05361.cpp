#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    float m[5]={350.34,230.90,190.55,125.30,180.90};
    while(a--){
        float b=0;
        for(int i=0;i<5;i++){
            float c;
            cin>>c;
            b+=c*m[i];
        }
        printf("$%.2f\n",b);
    }
}