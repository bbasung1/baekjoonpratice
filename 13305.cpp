#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector <long long> dist(a-1);
    for(int i=0;i<a-1;i++){
        cin>>dist[i];
    }
    vector <long long> cost(a);
        for(int i=0;i<a;i++){
        cin>>cost[i];
    }
    long long allcost=0;
    int fuelstop=cost[0];
        for(int i=0;i<a-1;i++){
            if(fuelstop>cost[i]){
                fuelstop=cost[i];
            }
            allcost+=fuelstop*dist[i];
    }
    cout<<allcost;
}