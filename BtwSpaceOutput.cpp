#include <string.h>
#include <stdlib.h>

char *BtwSpaceOutput(char *s)
{
    int spaces=0, end, start;
        for(size_t i=0; i<strlen(s); i++)
            if(*(s+i)==' ')
            {
                if(!spaces)
                    start=i;
                end=i;
                spaces++;
                if (spaces==2)
                    break;
            }
        if(spaces>1)
        {
            char * tmp=(char*)malloc(sizeof(char)*(end - start));
            strncpy(tmp , s+start+1, end-start);
            return tmp;
        }
            return " ";

}
