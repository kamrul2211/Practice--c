#include<stdio.h>

int main(){
    char country[]={'B','a','n','g','l','a','d','s','h'};
    int i;
    int lentgh=9;
    printf("%s \n",country);

    for (i=0;i<lentgh;i++){
        if(country[i]>=97 && country[i]<=122){
            country[i]='A'+ (country[i]-'a');
        }
    }
    printf("%s \n",country);
    return 0;
    
}