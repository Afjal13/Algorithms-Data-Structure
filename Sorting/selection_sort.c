#include<stdio.h>
//Complexity -Time- O(n^2)
//Complexity -Space- O(1)
int main(){
int num[10]={23,2,4,567,35,5,7,67,49,7};
int size=sizeof(num)/sizeof(num[0]);
int i=0,j=0,lowest=0;
for(i=0;i<size-1;i++){
    lowest=i;
    for(j=i+1;j<size;j++){
        if(num[lowest]>num[j]){
            lowest=j;
        }
    }
    if(lowest !=i){
        int temp=num[i];
        num[i]=num[lowest];
        num[lowest]=temp;

    }
}
for(i=0;i<size;i++){
    printf("%d ",num[i]);
}


}
