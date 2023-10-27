#include <stdio.h>

typedef struct {
    double x;
    double y;
} point;

int main() {

    point zero = { 0.0, 0.0 };
    point center;

    center.x = 10;
    center.y = 10;

    printf("(x, y) = (%.1f, %.1f)\n", zero.x, zero.y);
    printf("(x, y) = (%.1f, %.1f)\n", center.x, center.y);
    return 0;
}

