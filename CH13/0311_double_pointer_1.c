#include <stdio.h>


// 이중포인터 : heap segment에 사용시 유용 (동적 메모리 할당)

int main()
{
	// * 단일포인터 , ** 이중포인터
	int num, * ip, ** mip;


	printf("%d, %d, %d \n", sizeof(num), sizeof(ip), sizeof(mip));

	ip = &num;
	mip = &ip;

	**mip = 500;

	printf("%d, %d, %d \n\n", num, *ip, **mip);


	char* ptr[] = { "kingdom", "multi campus", "hello world", "one 하나", "two 둘", "서울시 강남구 역삼동 100", NULL }; // unsized arrray


	funcA(ptr);

	return 0;
}

// ptr에 저장된 문자열 출력
funcA(char **tmp) // tmp
{
	int i, len;
	char* ptr;

	printf("funcA() : %p, %d \n", tmp, sizeof(tmp));

	for (i = 0; tmp[i]; i++)
		printf("%s \n", tmp[i]);

	while (*tmp)
	{
		ptr = *tmp;
		len = 0;
		while (*ptr)
		{
			len++;
			ptr++;
		}
		printf("%p: %p, %s, %c, length : %d \n", tmp, *tmp, *tmp, **tmp, len);

		tmp++;
	}
}