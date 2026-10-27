//factorials 1-10
#include<stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 10; i++){
        int f = 1;
        for(j = 1; j <= i; j++){
            f *= j;
        }
        printf("%d\n", f);
    }
}
