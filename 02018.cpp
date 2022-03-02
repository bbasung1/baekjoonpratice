#include <iostream>
int main() {
	int a;
	scanf("%d", &a);
	int start = 1,end = 1;
	long long sum = 0, ans = 1;
    if(a==1){
        ans=0;
    }
	while (end <= a) {
		if (sum >= a) {
			sum -= start++;
		}
		else {
			sum += end++;
		}
		if (sum == a) {
			ans++;
		}
	}
	printf("%lld", ans);
}