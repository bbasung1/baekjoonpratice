#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> i;
    for(n;n>0;n--){
        int b;
        cin>>b;
        i.push_back(b);
    }
    int min=*min_element(i.begin(),i.end());
    int max=*max_element(i.begin(),i.end());
    cout<<min<<" "<<max<<endl;
}