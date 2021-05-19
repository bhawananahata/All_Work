#include<stdio.h>
#include<string.h>
int main()
{
struct man{
    char name[20];
    int licsenseNo;
    int KMS;
    char Route[100];
};
struct man ma;
printf("What's your Name?\n");
scanf("%s",&ma.name); 
printf("your licsense No.?\n");
scanf("%d",&ma.licsenseNo);
printf("How much KMS you've travelled?\n");
scanf("%d",&ma.KMS);
printf("please chose your Route here?\n");
scanf("%s",&ma.Route);

printf("your Name: %s\n",ma.name);
printf("your licsense No.:%d\n",ma.licsenseNo);
printf("your Route:%s\n",ma.Route);
printf("you've travelled:%d\n",ma.KMS);
return 0;    
}