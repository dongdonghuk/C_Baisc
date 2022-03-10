#include <stdio.h>



int main()
{
	char s1[20] = "kingdom", s2[20], s3[20], s4[20];

	strcpy(s2, s1);
	printf("s1: %s, s2: %s \n", s1, s2);

	myStrcpy(s3, s1);
	printf("s1 : %s, s3 : %s \n", s1, s3);

	strcpy(s4, "park");	//문자열 상수 포인터
	printf("s4 : %s \n", s4);

	return 0;
}

myStrcpy(char* to, char* from)
{
	while (*from)
	{
		*to = *from;
		to++, from++;
	}
	*to = '\0';
}

/*
myStrcpy(char* to, char* from)
{
	int i=0;
	while (from[i])
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}
*/

