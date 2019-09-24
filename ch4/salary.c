#include <stdio.h>
#define TAX_RATE 0.2

int main(void)
{
	const int MONTHS = 12;
	int m_salary,y_salary;

	printf("salary: ");
	scanf("%d", &m_salary);
	y_salary = MONTHS*m_salary;
	printf("year salary: %d\n",y_salary);
	printf("tax: %f\n", y_salary*TAX_RATE);

	return 0;
}
