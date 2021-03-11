#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<string, int> ii;
int main(){
    map<string, int> map;
    int a;
    cin>>a;
    for(int i=a;a>0;a--){
        int b;
        string c;
        cin>>b>>c;
        map[c]=b;
    }
    vector<ii> v(map.begin(),map.end());
    sort(v.begin(), v.end(), [](ii a, ii b) {
		return a.second <= b.second;
		});
    for(ii it:v) cout<<it.second<<" "<<it.first<<"\n";
}