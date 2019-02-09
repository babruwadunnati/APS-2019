#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int sum=15;
   //sum is given 15 , the numbers are 3,5,10

    int i;
    int res=sum+1;
    int finarr[res];
    memset(finarr,0,res*sizeof(finarr[0]));
  /*  for(i=0;i<res;i++){
         printf("%d",finarr[i]);
    }*/
    finarr[0]=1;
    for(i=0;i<res;i++){
        if(finarr[i]==1){
              finarr[i+3]=finarr[i+3]+1;
              //finarr[i+10]=finarr[i+10]+1;
             // if(finarr[i+3])
        }
    }
    for(i=0;i<res;i++){
        if(finarr[i]==1){
              finarr[i+5]=finarr[i+5]+1;
              //finarr[i+10]=finarr[i+10]+1;
             // if(finarr[i+3])
        }
    }
    for(i=0;i<res;i++){
        if(finarr[i]==1&&(i+10)<res){
             // finarr[i+10]=finarr[i+10]+1;
              finarr[i+10]=finarr[i+10]+1;
             // if(finarr[i+3])
        }
    }

    /*for(i=0;i<res;i++){
        printf("%d",finarr[i]);
    }*/
    printf("The number of ways:%d",finarr[sum]);

    return 0;
}
