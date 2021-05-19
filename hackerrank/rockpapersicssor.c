 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
int random(int n){
    srand(time(NULL));
    return rand()%n;
}

 int main(){
     int person;
     start: printf("welcome\n");
     printf("Enter: 0 For Rock\n 1 For Scissors\n 2 For Paper\n");
     scanf("%d",&person);
     // person's response
     if (person == 0 ){
         printf("you've chosen Rock\n");
     }
      else if (person == 1 ){
         printf("you've chosen Scissors\n");
     }
      else if (person == 2 ){
         printf("you've chosen Paper\n");
     }
      else{
         printf("Please chose a correct number\n");
         goto end;
     }

     // computer's response
     if (random(3) == 0 ){
         printf("computer has chosen Rock\n");
     }
      else if (random(3) == 1 ){
         printf("computer has chosen Scissors\n");
     }
      else {
         printf("computer has chosen Paper\n");
     }

     // tie condition
     if(random(3)==person){
         printf("It's a Tie\n");
     }
     // win conditions
     else if(random(3)==0 && person==2){
         printf("Congratulations! you've won this match\n");
     }
     else if(random(3)==1 && person==0){
         printf("Congratulations! you've won this match\n");
     }
     else if(random(3)==2 && person==1){
         printf("Congratulations! you've won this match\n");
     }
     // loose conditions
     else {
         printf("AAH! you've lost this match, better luck next time\n");
     }
 end: printf("please start again\n");
 goto start;
 return 0;
 }
