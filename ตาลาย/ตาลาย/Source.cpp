#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char num[9999], realNum[9999] = { 0 };
	scanf("%s", &num);
	if (strlen(num) <= 3)
	{
		printf("%s", num);
		return 0;
	}
	int count = 0, count2 = 0;
	for (int i = strlen(num) - 1; i >= 0; i--)
	{
		realNum[count] = num[i];
		if ((count2 + 1) % 3 == 0)
		{
			count++;
			realNum[count] = ',';
		}
		count++;
		if (num[i] != '-')	count2++;
	}
	for (int i = strlen(realNum) - 1; i >= 0; i--)
	{
		if (i == strlen(realNum) - 1 && realNum[i] == ',')	continue;
		if (realNum[i] == ',' && realNum[i + 1] == '-')	continue;
		printf("%c", realNum[i]);
	}
	return 0;
}