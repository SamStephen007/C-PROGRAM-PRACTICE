#include<stdio.h>
int binarysearch(int arr[],int start,int end,int x){
    if(end>=start){
        int mid = (start - (start+end))/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]>x)
            return binarysearch(arr,start,mid-1,x);
        if(arr[mid]<x)
            return binarysearch(arr,mid+1,end,x);
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int result = binarysearch(arr,0,n,x);
    if(result==-1){
        printf("Element can't be found");
    }else{
        printf("Element found at the position %d",result);
    }
}