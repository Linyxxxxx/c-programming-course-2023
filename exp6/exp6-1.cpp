#include <stdio.h>
#include <math.h>

int main() {
    int n, n_gt_90=0, n_80_89=0, n_70_79=0, 
        n_60_69=0, n_lt_60=0, x;
    scanf("%d", &n);
    double avg = 0.0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        avg += x;
        if (x >= 90) {
            n_gt_90++;
        } else if (x >= 80) {
            n_80_89++;
        } else if (x >= 70) {
            n_70_79++;
        } else if (x >= 60) {
            n_60_69++;
        } else {
            n_lt_60++;
        }
    }
    avg = avg / n;
    avg = round(avg * 10) / 10.0;
    printf("%.1lf %d %d %d %d %d\n", avg, n_gt_90, 
        n_80_89, n_70_79, n_60_69, n_lt_60);
}