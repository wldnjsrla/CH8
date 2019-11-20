#include <stdio.h>

int main(void)
{
	char star = '*';
	char* pstar = &star;

	printf("주소: %d  코드값: %d 문자: %c\n", &pstar, *pstar, *pstar);

	return 0;
}