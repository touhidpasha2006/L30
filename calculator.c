include <studio.h>
nt main() {
	int number1, number2, sum;

	printf("enter two integers:");
	scanf("%d %d",&number1,&number2);

	// calculate the sum 
	sum=number1+number2;

	printf("%d + %d = %d", number1, number2,sum);
	return 0;
