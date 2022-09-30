#include<stdio.h>
//Complexity O(n)
int main (){
    int arr[5]={1,2,3,4,5};
        int searchItem=4,i=0;
    for(i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]==searchItem){
            printf("Item found at index:%d",i);
            return 0;
        }
    }
    printf("Item not found");


}
