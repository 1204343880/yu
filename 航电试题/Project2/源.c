#define  _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>

#define MAX_T 1001
#define MAX_M 101

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int T, M;

    printf("请输入总时间T和草药数量M（用空格分隔）：");
    scanf_s("%d %d", &T, &M);

    int time[MAX_M], value[MAX_M];
    printf("请依次输入每种草药的采摘时间和价值（每行一组，用空格分隔）：\n");
    for (int i = 1; i <= M; i++) {
        printf("草药%d: ", i);
        scanf_s("%d %d", &time[i], &value[i]);
    }

    int dp[MAX_T] = { 0 };

    for (int i = 1; i <= M; i++) {
        for (int j = T; j >= time[i]; j--) {
            dp[j] = max(dp[j], dp[j - time[i]] + value[i]);
        }
    }

    printf("\n在%d时间内可以采到的草药最大总价值为：%d\n", T, dp[T]);

    return 0;
}