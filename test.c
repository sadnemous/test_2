/* strncpy example */
#include <stdio.h>
#include <string.h>
#define MAX_SZ 40
int main ()
{
  char str1[]= "To be or not to be";
  char str2[MAX_SZ];
  char str3[40];

  /* copy to sized buffer (overflow safe): */
  strncpy ( str2, str1, MAX_SZ );

  /* partial copy (only 5 chars): */
  strncpy ( str3, str2, 5 );
  str3[5] = '\0';   /* null character manually added */

  puts (str1);
  puts (str2);
  puts (str3);

  return 0;
}
