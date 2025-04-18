#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i,j;
    char s1[7];
    while(1){
        srand(time(NULL));
        for(i=0;i<6;i++){
            s1[i]=rand()%10+'0';
        }
        s1[i]='\0';
        printf("otp is %s",s1);
    }
    
  
    

    return 0;


}