#include<stdio.h>
int main(){
    int i;
    char s[100];
    printf("enter the string: ");scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            printf("\n");
        }
        else {
            printf("%c",s[i]);
        }

    }
    
    return 0;
}