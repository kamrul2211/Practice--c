#include <stdio.h>
int main()
{
    char country = 'b';
    if (country >= '97' && country <= '122')
    {
        country = 'A' + (country - 'a');
        printf("%s\n", country);
    }

    return 0;
}