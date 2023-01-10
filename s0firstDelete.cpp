#include <string.h>

char *s0firstDelete(char *s, char *s0)
{
    char *sFin=s;
    char *t;
    if((t=strstr(s, s0))!=NULL)
        {
            *t='\0';
            sFin=strcat(s, t+(strlen(s0)));;
        }
    return sFin;
}
