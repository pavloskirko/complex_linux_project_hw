#include "stdio.h"
#include "main.h"

int scanf_with_check(int * input)
{
	if ( scanf("%i", input) != 1 )
	{
		printf("Error: incorrect input\n");
		return 1;
	}
	else
		return 0;
}

int main()
{
	int a, b;
	enum user_choise reply = 0;
	printf("Please, choose what to perform(1-4):\n"
			"1. add\n"
			"2. subtract\n"
			"3. multiply\n"
			"4. divide\n"
			"5. factorial\n"
			"6. square root\n");
	scanf("%u", &reply);
	switch(reply)
	{
		case add:
			printf("a + b = ?\n"
					"a = ");
			if ( scanf_with_check(&a) )	return 1;
			printf("b = ");
			if ( scanf_with_check(&b) )	return 1;
			printf("a + b = %i\n", sum(a, b));
			break;
		case subtract:
			printf("a - b = ?\n"
					"a = ");
			if ( scanf_with_check(&a) )	return 1;
			printf("b = ");
			if ( scanf_with_check(&b) )	return 1;
			printf("a - b = %i\n", sub(a, b));
			break;
		case multiply:
			printf("a * b = ?\n"
					"a = ");
			if ( scanf_with_check(&a) )	return 1;
			printf("b = ");
			if ( scanf_with_check(&b) )	return 1;
			printf("a * b = %i\n", mult(a, b));
			break;
		case divide:
			printf("a / b = ?\n"
					"a = ");
			if ( scanf_with_check(&a) )	return 1;
			printf("b = ");
			if ( scanf_with_check(&b) )	return 1;
			if (b == 0)	
				printf("Error: division by zero\n");
			else
				printf("a / b = %.2f\n", div(a, b));
			break;
		case factorial:
			printf("a! = ?\n"
				"a = ");
			if ( scanf_with_check(&a) )	return 1;
			printf("a! = %i\n", fact(a));
			break;
		case square_root:
			printf("sqrt(a) = ?\n"
				"a = ");
			if ( scanf_with_check(&a) )	return 1;
			if (a < 0)
				printf("Error: sqrt of a negative number\n");
			else
				printf("sqrt(a) = %.4f\n", my_sqrt(a));
			break;
		default:
			printf("Error:incorrect input\n");
			break;
	}
	return 0;
}
