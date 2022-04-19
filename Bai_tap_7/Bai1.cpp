#include <stdio.h>
#include <iostream>
#include <cmath>

void update(int* a, int* b)
{
    // Complete this function
    int c = *a;
    int d = *b;
    *a = d + c;
    *b = abs(c - d);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
