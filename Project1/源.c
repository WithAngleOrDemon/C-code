#include<stdio.h>
int main()
{
	char arr[100] = {'\0'};
	gets(arr);
	printf("%s",arr);
	printf("\n");
	printf("%s", arr);
	return 0;
}