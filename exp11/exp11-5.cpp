#include <stdio.h>
#include <math.h>

struct Point {
    int x, y;
};

double GetSideLength(struct Point a, struct Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double CosineTheorem(double a, double b, double c) {
    return (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b);
}

double GetMaxAngle(struct Point pts[], int n) {
    double max_angle = 0;
    for (int i = 0; i < n; i++) {
        double angle = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < n; k++) {
                if (i == k || j == k) continue;
                double a = GetSideLength(pts[i], pts[j]);
                double b = GetSideLength(pts[i], pts[k]);
                double c = GetSideLength(pts[j], pts[k]);
                double cos_angle = CosineTheorem(a, b, c);
                double tmp_angle = acos(cos_angle);
                if (tmp_angle > angle) angle = tmp_angle;
            }
        }
        if (angle > max_angle) max_angle = angle;
    }
    return max_angle;
}

int main() {
    int i, n;
    struct Point pts[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
       scanf("%d%d", &pts[i].x, &pts[i].y);
    printf("%.6f", GetMaxAngle(pts, n));
    return 0;
}