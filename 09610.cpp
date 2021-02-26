#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[5]={0};
    for(a;a>00;a--){
        int c,d;
        cin>>c>>d;
        if(c==0||d==0){
            b[0]++;
        }
        else if(c>0&&d>0){
            b[1]++;
        }
        else if(c<0&&d>0){
            b[2]++;
        }
        else if(c<0&&d<0){
            b[3]++;
        }
        else if(c>0&&d<0){
            b[4]++;
        }
    }   
    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n",b[1],b[2],b[3],b[4],b[0]);
}