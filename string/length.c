#include <stdio.h>

int string_length(char str[]){
    int i , length=0;
    for (i=0;str[i] != '\0';i++){
        length++;
    }
    return length;

}
int main (){
    char country[100];
    int lenght,a=1;
    while (a = scanf("%s",country)){
        lenght = string_length(country);
        printf("%d\n",lenght);
    }
    return 0;
}