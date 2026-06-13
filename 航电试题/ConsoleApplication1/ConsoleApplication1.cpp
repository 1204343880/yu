#include <stdio.h>

void judgeTriangle(int a, int b, int c) {
    // 检查是否能构成三角形
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("边长必须为正数！\n");
        return;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("(%d, %d, %d) 不能构成三角形\n", a, b, c);
        return;
    }

    // 判断三角形类型
    if (a == b && b == c) {
        printf("(%d, %d, %d) 是等边三角形\n", a, b, c);
    }
    else if (a == b || a == c || b == c) {
        printf("(%d, %d, %d) 是等腰三角形\n", a, b, c);
    }
    else {
        printf("(%d, %d, %d) 是不等边三角形\n", a, b, c);
    }
}

int main() {
    int a, b, c;
    char choice;

    printf("三角形判断程序\n");

    do {
        printf("\n请输入三角形的三条边长(用空格分隔): ");
        scanf_s("%d %d %d", &a, &b, &c);

        judgeTriangle(a, b, c);

        printf("\n是否继续测试？(y/n): ");
        scanf_s(" %c", &choice);  // 注意前面的空格，用于吸收换行符
    } while (choice == 'y' || choice == 'Y');

    printf("程序结束。\n");
    return 0;
}