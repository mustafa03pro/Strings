#include<stdio.h>
int main(){
    int i;
    char s[100];
    printf("enter the string: ");scanf("%[^\n]",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')s[i]-=32;
        else if(s[i]>='A'&&s[i]<='Z')s[i]+=32;

    }
    printf(s);
    return 0;
}