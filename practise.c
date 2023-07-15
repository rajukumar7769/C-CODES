#include<stdio.h>

int binary(int arr[],int n,int item){
    int beg,mid,end;
    beg=0;
    end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;

        if(arr[mid]==item){
            return mid;
        }
        if(arr[mid]<item){
            beg=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int a[]={2,4,5,6,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int item=6;
    // printf("search : ");
    // scanf("%d",&item);
    int result = binary(a,n,item);
    printf("%dth position",result+1);
   
    return 0;
}