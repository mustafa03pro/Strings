#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char s[100];
    int i;
    printf("enter the string:");
    scanf("%[^\n]",s);
    strlen(s);
    printf("length %d",strlen(s));
    for(i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z')s[i]='@';
        else if(s[i]>='A'&&s[i]<='Z')s[i]='#';
        else if(s[i]>='0'&&s[i]<='9')s[i]='$';
        else if (s[i]=' ')s[i]='*';
        else s[i]='=';

    }
    printf("%s",s);
    return 0;
}
