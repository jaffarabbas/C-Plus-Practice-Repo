#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a + *b;
    int value = (*a > *b) ? (*a - *b) : -(*a - *b);
    *a = sum;  
    *b = value;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}