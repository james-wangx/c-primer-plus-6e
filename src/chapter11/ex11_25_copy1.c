#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5

char *s_gets(char *st, int n);

int main(void)
{
	char qwords[LIM][SIZE]; // 字符串数组
	char temp[SIZE]; // 临时数组
	int i = 0;
	printf("Enter %d words beginning with q:\n", LIM);
	while (i < LIM && s_gets(temp, SIZE)) {
		if (temp[0] != 'q')
			printf("%s doesn't begin with q!\n", temp);
		else {
			strcpy(qwords[i], temp);
			i++;
		}
	}
	puts("Here are the words accepted:");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);

	return 0;
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val) {
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
