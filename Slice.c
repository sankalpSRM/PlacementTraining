#include <stdio.h>
#include <stdlib.h>

char* slice(char s[], int startIndex, int numChars) {
      char *substr;
      substr = calloc(numChars+1, sizeof(char));
      int i ,j;
      for (i = startIndex, j = 0;j<numChars;i++, j++)
          substr[j] = s[i];
      return substr;
}

int main()
{
    printf("%s", slice("Sankalp", 4, 30));
    return 0;
}
