#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Bangla", str2[] = "Desh", str3[30];
    int i, j,lenght1,length2;

    for (i = 0, j = 0; i < strlen(str1); i++, j++)
    {
        str3[j] = str1[i];
    }
    for (i = 0; i < strlen(str2); i++, j++)
    {
        str3[j] = str2[i];
    }
   
    printf("%s \n", str3);
    return 0;

}