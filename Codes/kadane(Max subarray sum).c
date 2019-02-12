#include<stdio.h>


int main(){
    int a[8]={-2,-3,4,-1,-2,1,5,-3};
    int tmax=0,max=0,i;
    for(i=0;i<8;i++){
        tmax=tmax+a[i];
        if(tmax<0)
            tmax=0;
        if (max<tmax)
            max=tmax;
    }
    printf("%d",max);

    return 0;
}
