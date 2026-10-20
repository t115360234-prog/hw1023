#include <stdio.h>
#include <math.h> // 若需要用到 pow 函數可引入，此處用連乘或公式皆可

int main(void) {
    double principal = 5000.0; // 本金 $5000
    int years = 15;            // 15年[cite: 1]
    double rate;

    // 外層迴圈控制利率從 10.0% 到 12.0%，每次增加 0.5% (0.005)
    for (rate = 0.10; rate <= 0.121; rate += 0.005) {
        printf("--- 利率為: %.1f%% ---\n", rate * 100.0);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        double amount = principal;
        for (int year = 1; year <= 15; year++) {
            amount = amount * (1.0 + rate);
            printf("%4d%21.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}