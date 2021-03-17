#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    sort(a.begin(),a.end());
     for(auto it = a.rbegin(); it != a.rend(); ++it) {
      std::cout << *it;
 }
}