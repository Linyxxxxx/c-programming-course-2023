#include <stdio.h>

int main() {
    long long students[1001][11];

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld %lld %lld %lld %lld %lld %lld",
                &students[i][0], &students[i][1], 
                &students[i][2], &students[i][3], 
                &students[i][4], &students[i][5], 
                &students[i][6]
            );
        students[i][7] = i + 1;
    }
    int k;
    scanf("%d", &k);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j][k] < students[j + 1][k]) {
                for (int l = 0; l < 8; l++) {
                    long long temp = students[j][l];
                    students[j][l] = students[j + 1][l];
                    students[j + 1][l] = temp;
                }
            } else if (students[j][k] == students[j + 1][k]) {
                if (students[j][0] > students[j + 1][0]) {
                    for (int l = 0; l < 8; l++) {
                        long long temp = students[j][l];
                        students[j][l] = students[j + 1][l];
                        students[j + 1][l] = temp;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%lld\n", students[i][7]);
    }

    // for (int i = 0; i < n; i++) {
    //     printf("%lld %lld %lld %lld %lld %lld %lld %lld\n",
    //             students[i][0], students[i][1], 
    //             students[i][2], students[i][3], 
    //             students[i][4], students[i][5], 
    //             students[i][6], students[i][7]);
    // }
}