#include <string.h>

char *s1tos2change(char *s, char *s0, char *s2)
{
    char *p, *start, buf[100];
    start=s;

    p=strstr(start, s0);

    start=p+strlen(s0);
    strcpy(buf,start);
    start-=strlen(s0);

    strcpy(start, s2);
    start+=strlen(s2);

    strcat(start, buf);
    return s;
}
