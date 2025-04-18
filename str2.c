#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i,j;
    char s[100];
    printf("enter the steing:");scanf("%[^\n]",s);
   i=strlen(s);
    //for(i=0;s[i]!='\0';i++);
    for(j=0;j<=i/2;j++){
        if(tolower(s[j])==tolower(s[i-j-1])){
            printf("palindrome");
            return 0;
        }
        else printf("not a palindrome");

    }
    

    return 0;


}