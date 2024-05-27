/* strchr example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "This is a sample string";
  char chuoi [100]; 
  char *pstr;

  // Don't forget extra char for nul character.
  pstr = new char[256];
  gets(chuoi); 
  int dodai = strlen (chuoi);
  char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",chuoi);
  pch=strchr(chuoi,'s');
  while (pch!=NULL)
  {
    printf ("found at %d\n",pch-chuoi+1);
    pch=strchr(pch+1,'s');
  }
    // Done with str.
  delete [] pstr;
  return 0;
}
