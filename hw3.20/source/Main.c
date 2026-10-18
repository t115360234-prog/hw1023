#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double hours, rate, salary;
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%lf", &hours);
	while (hours != -1) {
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%lf", &rate);
		if (hours > 40) {
			salary = (40.0 * rate) + ((hours - 40.0) * rate * 1.5);
		
		}
		else {
			salary = hours * rate;
		}

		printf("Salary is $%.2f\n\n", salary);
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%lf", &hours);




	}











	return 0;


}