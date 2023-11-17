#include "3-calc.h"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	
	char *sep = argv[2];
	/*if (!(sep == "+" || sep == "-" || sep == "*" || sep == "/" || sep == "%"))
	{
		printf("Error\n");
		exit(99);
	}*/
	if ((sep == "/" || sep == "%") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	int (*kda)(int , int) = get_op_func(argv[2]);
	printf("%d \n" ,kda(num1,num2));
}
