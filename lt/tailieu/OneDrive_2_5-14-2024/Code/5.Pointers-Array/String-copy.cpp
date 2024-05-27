#include <stdio.h>
#include <stdlib.h>
int main() {
	char s1[] = "abcd123154";
	int i;
	char* s2;
	s2 = (char*)malloc(sizeof(s1));

	for (i=0; s1[i]!=0; i++)
		s2[i] = s1[i];
		//Last element of string 
	s2[i] = 0;

	printf("s2 = %s\n", s2);

	free(s2);
	return 0;
}
