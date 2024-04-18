#include<stdio.h>
int main(){
    int i,x,found =0;
    scanf("%d",&x);
    int arr[]={1,2,3,4,5};
    int len = sizeof arr/sizeof arr[0];
    for(i=0;i<len;i++){
        if(arr[i]==x){
            found = 1;
            break;
        }
    }
    if(found ==  1){
        printf("Element found in the position %d",i+1);
    }else{
        printf("ELEMENT NOT FOUND");
    }
}