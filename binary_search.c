#include<stdio.h>
int binary_search(int arr[],int n,int key){
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;

}
int main(){
    int arr[]={2,8,14,32,66,100,104,246,409};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=104;
    int index = binary_search(arr,n,key);
    printf("The element %d found at index %d",key,index);



}