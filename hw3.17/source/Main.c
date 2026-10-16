#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    // 提示輸入帳號，若輸入 -1 則結束迴圈
    printf("Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);

    while (accountNumber != -1) {
        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%f", &totalCharges);

        printf("Enter total credits: ");
        scanf("%f", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        // 計算新餘額：期初餘額 + 本月消費 - 本月信用額
        newBalance = beginningBalance + totalCharges - totalCredits;

        // 檢查新餘額是否超過信用額度
        if (newBalance > creditLimit) {
            printf("Account:     %d\n", accountNumber);
            printf("Credit limit: %.2f\n", creditLimit);
            printf("Balance:     %.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n");
        }

        // 讀取下一個帳號，以便繼續或結束迴圈
        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &accountNumber);
    }

    return 0;
}