#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isVowel(char c) {
    return (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'||
    c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U');
}

bool isConsonant(char c) {
    return ((c >= 'A' && c <= 'Z') || (c>='a' && c<= 'z')) && !isVowel(c);
}

int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0, j = len -1; i<j; i++, j--) {
        if (isConsonant(str[i]) && isConsonant(str[j]))
            str[i] = str[i]+str[j] - (str[j]=str[i]);
        else if (isConsonant(str[i])) i--;
        else if (isConsonant(str[i])) j++;
    }
    puts(str);
    return 0;
}
