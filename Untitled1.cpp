#include <stdio.h>
 
int main(){
    int n, tmp;
    scanf("%d", &n);
    int m = 0;
    while(n > 0){
        tmp = n % 10;
        m = m * 10 + tmp;
        n = n / 10;
    }
    printf("%d", m);
}
