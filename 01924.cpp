#include <iostream>
#include <string>
using namespace std;
int main(){
    string date[7]={"SUN","MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int a,b;
    int sum=0;
    cin>>a>>b;
    for(int i=1;i<a;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            sum+=31;
        }
        else if(i==2){
            sum+=28;
        }
        else{
            sum+=30;
        }
    }
    cout<<date[(sum+b)%7]<<"\n";
}