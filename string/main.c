#include<stdio.h>

int main(){
    char country[]={'B','a','n','g','l','a','d','s','h','\0'};
    int i;
    int lentgh=9;
    

    for (i=0;i<lentgh;i++){
        if(country[i]>=97 && country[i]<=122){
            country[i]='A'+ (country[i]-'a');
        }
    }
    printf("%s \n",country);
    // Length of country name;
    int x = 0, conunt = 0;
    while (country[x] != '\0')
    {
        conunt ++;
        x ++;

    }
    printf("Lenght of string : %d\n",conunt);
    
    return 0;
    
}