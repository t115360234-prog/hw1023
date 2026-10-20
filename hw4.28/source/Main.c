#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int paycode;

    printf("請輸入員工薪資代碼 (1:主管, 2:時薪工, 3:抽成, 4:按件計酬, -1結束): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
        case 1: { // 1: 主管 (固定週薪)
            double salary;
            printf("請輸入主管的固定週薪: ");
            scanf("%lf", &salary);
            printf("本週薪資為: $%.2f\n\n", salary);
            break;
        }
        case 2: { // 2: 時薪工 (前40小時原薪，超過1.5倍)
            double wage, hours, pay;
            printf("請輸入時薪: ");
            scanf("%lf", &wage);
            printf("請輸入本週工作時數: ");
            scanf("%lf", &hours);

            if (hours <= 40.0) {
                pay = hours * wage;
            }
            else {
                pay = (40.0 * wage) + ((hours - 40.0) * wage * 1.5);
            }
            printf("本週薪資為: $%.2f\n\n", pay);
            break;
        }
        case 3: { // 3: 抽成員工 (底薪 $250 + 5.7% 抽成)
            double sales;
            printf("請輸入本週總銷售額: ");
            scanf("%lf", &sales);
            double pay = 250.0 + (sales * 0.057);
            printf("本週薪資為: $%.2f\n\n", pay);
            break;
        }
        case 4: { // 4: 按件計酬員工 (單價 * 件數)
            double pieceValue;
            int items;
            printf("請輸入每件商品的固定單價: ");
            scanf("%lf", &pieceValue);
            printf("請輸入本週生產件數: ");
            scanf("%d", &items);
            double pay = pieceValue * items;
            printf("本週薪資為: $%.2f\n\n", pay);
            break;
        }
        default:
            printf("無效的薪資代碼，請重新輸入！\n\n");
            break;
        }

        // 讀取下一個員工的薪資代碼
        printf("請輸入員工薪資代碼 (1:主管, 2:時薪工, 3:抽成, 4:按件計酬, -1結束): ");
        scanf("%d", &paycode);
    }

    printf("\n程式已結束。\n");
    return 0;
}