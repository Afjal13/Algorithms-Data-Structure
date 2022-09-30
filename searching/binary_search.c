#include<stdio.h>
// Complexity log2^n
int binary_search(){
    int number[10]={1,2,3,4,5,6,7,8,9,10};
    int search_num=10,start=0,end=sizeof(number)/sizeof(int)-1,mid=0;
    while(start<=end){
        mid=(start+end)/2;
        if(number[mid]==search_num){
            return mid;
        }
        else if(number[mid]<search_num){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}
int main(){
    printf("Item found at index:%d",binary_search());

}
