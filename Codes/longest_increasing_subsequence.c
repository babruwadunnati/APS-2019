#include<stdio.h>


int main(){
    int i,j;
    int max=0;
    int arr[6]={5,11,3,15,2,1};
    int newarr[6]={1,1,1,1,1,1};
    for(j=1;j<6;j++){
        for(i=0;i<j;i++){
            if((arr[j]>arr[i])&&(newarr[j]<=newarr[i]+1)){
                    newarr[j]=newarr[j]+1;

            }
        }

    }
    /*for(i=0;i<6;i++){
        printf("%d",newarr[i]);
    }*/
    for(i=0;i<6;i++){
        if(newarr[i]>max){
            max=newarr[i];
        }
    }
    printf("%d",max);

    return 0;
}
