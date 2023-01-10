#include <string.h>

char *s0delete(char *s, char *s0)
{
    char *sFin=s;
    char *t;
    while ((t=strstr(s, s0))!=NULL)
    {
        *t='\0';
        sFin=strcat(s, t+(strlen(s0)));;
    }
    return sFin;
}
