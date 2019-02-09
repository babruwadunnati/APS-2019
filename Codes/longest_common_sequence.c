#include<stdio.h>
#include<string.h>
int lcs(char* str,char* str1){
    int i,j;
    int a=strlen(str); //length of lmnop=5
    int b=strlen(str1); //length of lmmnoop =7
    int arr[a+1][b+1]; //int[6][8]
    for(i=0;i<a+1;i++){//arr[0][0] to arr[5][0] made 0
        arr[i][0]=0;
    }
    for(i=0;i<b+1;i++){// arr[0][0] to arr[0][7] made 0
        arr[0][i]=0;
    }
    for(i=1;i<a+1;i++){
        for(j=1;j<b+1;j++){
            if(str[i-1]==str[j-1]){
                // if char match :Diagonally previous element +1
                arr[i][j]=arr[i-1][j-1]+1;
            }else{
                // If char doesnt match: max of left and upper number
                arr[i][j]=(arr[i-1][j]>arr[i][j-1])?arr[i-1][j]:arr[i][j-1];

            }
        }
    }
    /*for(i=0;i<a+1;i++){
        for(j=0;j<b+1;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }*/

    return arr[a][b];





}

int main(){
    char str[50]="lmnop";
    char str1[50]="lmmnoop";
    int s;
    s=lcs(str,str1);
    printf("Longest common subsequence length:%d\n",s);
    return 0;
}
