#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(int argc, char const *argv[])
{
	FILE *fp;
	char words[MAX];
	if ((fp = fopen("wordy", "a+")) == NULL) {
		fprintf(stderr, "Can't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	}
	puts("Enter words to add to the file; press the #");
	puts("Key at the beginning of a line to terminate.");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%s\n", words);
	puts("File contents:");
	rewind(fp); // 回到文件开始处
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done!");
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");

	return 0;
}
