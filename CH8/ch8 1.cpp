#include <stdio.h>

int main(void)
{
	char star = '*';
	char* pstar = &star;

	printf("�ּ�: %d  �ڵ尪: %d ����: %c\n", &pstar, *pstar, *pstar);

	return 0;
}