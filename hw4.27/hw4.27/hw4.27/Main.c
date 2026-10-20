#include <stdio.h>

int main(void) {
    int side1, side2, hypotenuse;
    int count = 0; // 用來統計找到幾組

    printf("%-10s%-10s%-10s\n", "Side 1", "Side 2", "Hypotenuse");
    printf("------------------------------\n");

    // 三層巢狀迴圈：暴力搜尋所有可能 (1 ~ 500)
    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) { // side2 從 side1 開始，可避免印出重複組合 (如 3,4,5 與 4,3,5)
            for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++) {
                // 判斷是否符合畢氏定理
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%-10d%-10d%-10d\n", side1, side2, hypotenuse);
                    count++;
                }
            }
        }
    }

    printf("\n總共找到 %d 組畢氏三元組。\n", count);
    return 0;
}