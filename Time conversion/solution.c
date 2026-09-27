#include <stdio.h>

int main()
{
    char s[11];
    scanf("%10s", s);

    int hour = (s[0] - '0') * 10 + (s[1] - '0');

    if (s[8] == 'P' && hour != 12)
        hour += 12;

    if (s[8] == 'A' && hour == 12)
        hour = 0;

    printf("%02d:%c%c:%c%c\n",
           hour, s[3], s[4], s[6], s[7]);

    return 0;
}