#include <stdio.h>
#include <math.h>

int main() {
    int k, w;
    scanf("%d %d", &k, &w);
    float cost = 0.0;

    // init params
    float cost_1, cost_2;
    if(k == 1) {
        cost_1 = 0.8;
        cost_2 = 1.2;
    } else if(k == 2) {
        cost_1 = 1.2;
        cost_2 = 2.0;
    }

    if(w <= 100) {
        cost = (ceil(w / 20.) * cost_1);
    } else {
        cost = (5 * cost_1) + (ceil((w - 100) / 100.) * cost_2);
    }
    
    printf("%.2f", cost);
}