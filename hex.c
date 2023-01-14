#include <stdio.h>
#include <ctype.h>
int main() {

    char *s = "Put away some money so you can die someplace warm and don't ever touch it. Not for anyone, ever.";

    char* p1 = s;
    char* p2 = s;
    int i = 0;
    int charnum = 0;
    
    while(*p1 != '\0')
    {
        if( i == 0)
          printf("%08x: ",charnum);
        
        printf("%c", *p1++);
        ++i;
        if(i == 16)
        {
            printf("  ");
             while(i-- >0)
            {
                isprint(*p2) ? printf("%x ", *p2): printf(". ");
                ++p2;
            }
            printf("\n");
            i = 0;
            p2 = p1;
        }
        ++charnum;
    }
    if(i > 0)
        printf("  ");
    while(i-- >0)
    {
        isprint(*p2) ? printf("%x ", *p2): printf(". ");
        ++p2;
    }
    return 0;
}
