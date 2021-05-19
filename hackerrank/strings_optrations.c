#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    char  str3[] = "gochu";
    gets(str1);
    gets(str2);
    puts(str1);
    printf(" is a  good friend of ");
    puts(str2);
    puts(strcat(str1,str2));
    strcpy(str1,str2);
   puts(str2);
   puts(str1);
    puts(strrev(str3));
    printf("the length of s3 is given by %d\n",strlen(str3));
    printf("the compare of s3 is given by %d",strcmp(str3,str2));
   return 0;
} 