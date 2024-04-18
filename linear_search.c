#include<stdio.h>
int main(){
       int arr[]={45,76,9,49,83,28,36};
       int n;
       printf("enter the value of n :");
       scanf("%d",&n);

       for(int i=0;i<7;i++){
        if(arr[i]==n){
            printf("The index of number %d is %d",n,i);
        }
       }

   return 0;
}