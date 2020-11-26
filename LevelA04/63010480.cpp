#include<stdio.h>
int findA(int V, int T, int U)
{
	int A;
	if (T < 0 || U < 0)
	{
		A = -1;
	}
	else
	{
		A = (V - U)/T;
	}
	return A;
}
int main()
{
	struct info
	{
		int A;
		int U;
		int T;
		int V;
	} object01, object02;

	printf("Enter early speed (m/s) :");
	scanf_s("%d", &object01.U);
	printf("Enter current speed (m/s) :");
	scanf_s("%d", &object01.V);
	printf("Enter time (s) :");
	scanf_s("%d", &object01.T);

	printf("\nEnter early speed (m/s) :");
	scanf_s("%d", &object02.U);
	printf("Enter current speed (m/s) :");
	scanf_s("%d", &object02.V);
	printf("Enter time (s) :");
	scanf_s("%d", &object02.T);

	object01.A = findA(object01.V, object01.T, object01.U);
	object02.A = findA(object02.V, object02.T, object02.U);

	if (object01.A == -1)
	{
		printf("\n OBJECT 1 IS E R R O R ! ! \n");
	}
	else printf("\nAccelerate of object 1 is %d\n", object01.V);
	if (object02.A == -1)
	{
		printf(" OBJECT 2 IS E R R O R ! ! ");
	}
	else printf("Accelerate of object 2 is %d", object02.V);

	return 0;
}