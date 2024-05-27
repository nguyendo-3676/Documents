// memory_leak
// gcc -gstabs valgrind_memory_leak.c -o valgrind_memory_leak
// $ valgrind  -v ./valgrind_memory_leak
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void leak()
{  
  void *ptr=malloc(100);
  ptr++;
}
int main()
{
  printf("#Let's leak 100 bytes");
  leak();
  printf("#100 bytes leaked");
  return 0;
} 
