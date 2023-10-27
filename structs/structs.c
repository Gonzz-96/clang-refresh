#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double x;
    double y;
} point;

point *makepoint(double x, double y) {
    point *p = (point*)malloc(sizeof(point));
    p->x = x;
    p->y = y;
    return p;
}

int main() {

    point zero = { 0.0, 0.0 };
    point center;

    center.x = 10;
    center.y = 10;

    point *top_left = makepoint(33.0, -10.0);

    printf("(x, y) = (%.1f, %.1f)\n", zero.x, zero.y);
    printf("(x, y) = (%.1f, %.1f)\n", center.x, center.y);
    printf("(x, y) = (%.1f, %.1f)\n", top_left->x, top_left->y);
    return 0;
}

