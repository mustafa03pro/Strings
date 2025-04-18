#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char s[100];
    printf("enter the steing:");scanf("%[^\n]",s);
   i=strlen(s);
    //for(i=0;s[i]!='\0';i++);
    for( ;i>0;i--,s[i]='\0'){
        puts(s);

    }
    

    return 0;


}