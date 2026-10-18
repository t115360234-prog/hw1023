#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int length, breadth;

    // 1. 輸入長與寬
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    // 2. 雙重迴圈開始
    for (int i = 1; i <= length; i++) {       // 外層：控制高度（幾列）
        for (int j = 1; j <= breadth; j++) {  // 內層：控制寬度（每列幾個字元）

            // 3. 判斷是否在邊框上
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+"); // 邊框印出 +
            }
            else {
                printf(" "); // 中間內部印出空白
            }
        }
        // 4. 每一列印完後換行
        printf("\n");
    }

    return 0;
}