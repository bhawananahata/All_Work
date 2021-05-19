#include <stdio.h>
#include <stdlib.h>
int routeCount(int n, int *routes){
    int product = 1;
    for(int i=0 ; i< n-1 ;i++){
      //  printf("%d ",routes[i]);
       
        product = product*routes[i];
    }
    return product % 1234567;
}

int main()
{
    int t, n,p;
    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%d", &n);
        int routes[n-1];
        for(int i = 0; i<n-1 ;i++){
         scanf("%d",&p);
         routes[i] = p;
       // printf("p : %d\n",p);  
        }
        
        printf("%d\n", routeCount(n, routes));
        t--;
    }

    return 0;
}