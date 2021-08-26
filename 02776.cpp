#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        int *c=new int[b];
        for(int i=0;i<b;i++){
            cin>>c[i];
        }
        sort(c,c+b);
        int d;
        cin>>d;
        while(d--){
            int e;
            cin>>e;
            int fir=0;
            int last=b-1;
            bool ans=0;
            while(fir<=last){
                int mid=(fir+last)/2;
                if(c[mid]==e){
                    ans=1;
                    break;
                }
                if(e>c[mid]){
                    fir=mid+1;
                }
                else{
                    last=mid-1;
                }
            }
            cout<<ans<<"\n";
        }
    }
}