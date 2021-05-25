#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, m;
        cin >> n >> m;
        int sum = 0;
        for (n; n <= m; n++)
        {
            string k = to_string(n);
            int start=0;
            while(true){
                int fin=k.find('0',start);
                if(fin==-1){
                    break;
                }
                sum++;
                start=fin+1;
            }
        }
            cout<<sum<<"\n";
    }
}