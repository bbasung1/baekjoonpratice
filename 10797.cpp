#include <iostream>
#include <string>
int main(){
    char a;
    std::cin>>a;
    int d=0;
    for(int i=0;i<5;i++){
        std::string b;
        std::cin>>b;
        for(char &c:b){
            if(c==a){
                d++;
            }
        }
    }
    std::cout<<d<<"\n";
}