#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double sales;
	double salary;

	printf("Enter sales in dollars (-1 to end):");
	scanf("%lf", &sales);

	while (sales != -1.0) {
		salary = 200.0 + (sales * 0.09);
		//顯示計算結果， % .2f 代表格式化輸出至小數點後兩位
			printf("Salary is: $%.2f\n\n", salary);

		// 再次提示輸入下一筆銷售額
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%lf", &sales);
	}
	return 0;









}