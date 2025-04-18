#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char s1[100],s2[100],s3[200];
    printf("enter the steing:");scanf("%[^\n]",s1);
     getchar();
    //fgets();
    printf("enter the secode steing:");scanf("%[^\n]",s2);
   //i=strlen(s1);
   for(i=0;s1[i]!='\0';i++){
    s3[i]=s1[i];

   }
   
    //for(i=0;s[i]!='\0';i++);
    for(s3[i++]=' ',j=0;s2[j]!='\0';i++,j++){
        s3[i]=s2[j];

    }
    s3[i]='\0';
    printf("your name %s",s3);
    

    return 0;


}