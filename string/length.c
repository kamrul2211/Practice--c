// #include <stdio.h>

// int string_length(char str[]){
//     int i , length=0;
//     for (i=0;str[i] != '\0';i++){
//         length++;
//     }
//     return length;

// }
// int main (){
//     char country[100];
//     int lenght,a=1;
//     while (a = scanf("%s",&country)){
//         lenght = string_length(country);
//         printf("%d\n",lenght);
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    char name [50];
    printf("Enter your name\n");
    gets(name);

    int i = 0, conunt = 0;
    while (name[i]!='\0')
    {
        conunt ++;
        i ++;
    }
    printf("Length of name is : %d\n",conunt);
    return 0;
    
    
}