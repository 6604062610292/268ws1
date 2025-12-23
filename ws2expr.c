#include <stdio.h>

int main() {

    int a, b, c, d;

    
    a = 1; b = 1; c = 5; d = -1;
    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
    printf("WS2A = %d\n", a + b * c - d);
    printf("WS2B = %d\n", (a + b) * (c - d));
    printf("WS2C = %d\n", a % b + c * d);
    printf("WS2D = %d\n", a > b && c <= d);
    printf("WS2E = %d\n\n", a == d || b != c);

    
    a = 9; b = 2; c = 0; d = 1;
    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
    printf("WS2A = %d\n", a + b * c - d);
    printf("WS2B = %d\n", (a + b) * (c - d));
    printf("WS2C = %d\n", a % b + c * d);
    printf("WS2D = %d\n", a > b && c <= d);
    printf("WS2E = %d\n\n", a == d || b != c);

    
    a = 0; b = 3; c = 3; d = 3;
    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
    printf("WS2A = %d\n", a + b * c - d);
    printf("WS2B = %d\n", (a + b) * (c - d));
    printf("WS2C = %d\n", a % b + c * d);
    printf("WS2D = %d\n", a > b && c <= d);
    printf("WS2E = %d\n", a == d || b != c);

    return 0;
}

