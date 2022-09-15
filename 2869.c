#include <stdio.h>

int main(){
    int A, B, v;
    int day;

    scanf("%d %d %d", &A, &B, &v);

    day = (v-B-1) / (A-B) + 1;

    printf("%d", day);

    return 0;
}