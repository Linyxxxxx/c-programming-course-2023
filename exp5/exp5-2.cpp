#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int N;
        double cur_score, min_score=100, max_score=0, sum_score=0;
        scanf("%d", &N);
        for (int n = 0; n < N; n++) {
            scanf("%lf", &cur_score);
            sum_score += cur_score;
            if (cur_score < min_score) {
                min_score = cur_score;
            }
            if (cur_score > max_score) {
                max_score = cur_score;
            }
        }
        sum_score -= min_score;
        sum_score -= max_score;
        double final_score = sum_score / (N - 2);
        printf("%.2lf\n", final_score);
    }
}