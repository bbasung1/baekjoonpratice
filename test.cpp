#include<stdio.h>

int main(){
    int resx = 0, resy = 0, n = 3;
    while(n--) {
    int x, y;
    scanf("%d %d", &x, &y);
    resx ^= x;
    resy ^= y;
    }
    printf("%d %d", resx, resy);
}
