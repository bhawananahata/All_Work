#include<stdio.h>
#include<stdlib.h>
 
int birthdayCakeCandles(long int tall,long int n,long int* candles) {
   long int candles_count = 0;
    for(int i=1 ; i<= n ; i++){
       if(tall == candles[i]){
          candles_count ++ ; 
       }
  }
   return candles_count ;
}

int main(){
  long int  n,candles[n],tall = 0;
  scanf("%ld",&n);
  for(int i=1 ; i<= n ; i++){
       scanf("%ld",&candles[i]);
       if(candles[i]>tall){
           tall = candles[i];
       }
  }

// birthdayCakeCandles(tall,candles);
 printf("%ld",birthdayCakeCandles(tall,n,candles));
    return 0;
}