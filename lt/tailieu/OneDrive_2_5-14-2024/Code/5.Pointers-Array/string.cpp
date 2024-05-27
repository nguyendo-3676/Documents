#include <stdio.h>
#include <string.h>	
int main(void) {

  char s[] = "paul";
  char s1[] = "The program in C";

  printf("s is %ld elements long\n", sizeof(s));
  printf("s is %ld elements long\n", sizeof(s1));
 // Note that the strlen() function doesn't count the null character \0 while calculating the length.
  printf("s=%s, strlen(s)=%ld\n", s, strlen(s));


  return 0;
}
