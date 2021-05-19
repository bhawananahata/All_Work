#include<stdio.h>
#include<stdlib.h>

void findPoint(int px, int py, int qx, int qy){
    int x , y;
    x = qx + (qx-px);
    y = qy + (qy-py);
    printf("x:%d , y: %d",x,y);
}

int main(){
int t,px,py,qx,qy;
scanf("%d",&t);
while(t>0){
    scanf("%d%d%d%d",&px,&py,&qx,&qy);
    findPoint(px,py,qx,qy);
    t--;
}

return 0;
}
