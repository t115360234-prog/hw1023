#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double principal;
	double rate;
	double interest;
	int days;

	printf("Enter loan principal (-1 to end): ");
	scanf("%lf", &principal);
	while (principal != -1) {
		printf("Enter loan rate: ");
		scanf("%lf", &rate);

		printf("Enter loan days: ");
		scanf("%d", &days);

		interest = principal * rate * days / 365.0;
		printf("The interest charge is $%.2f\n\n", interest);

		printf("Enter loan principal (-1 to end): ");
		scanf("%lf", &principal);
	 }
	return 0;
}