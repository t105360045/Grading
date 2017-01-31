#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int data;
	scanf_s("%d", &data);
	switch (data * 2 / 1024)
	{
	case 0:
		printf("A");
		break;
	case 1:
		printf("B");
		break;
	default:
		printf("fail");
		break;
	}
	printf("\n");
	system("pause");
	return 0;

}