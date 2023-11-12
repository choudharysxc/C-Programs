#include<stdio.h>
#include<stdlib.h>
#define max 10

int val(int arr[],int m){

    int i=0;
    for(i;i<m;i++){
        scanf("%d",&arr[i]);
    }

    return 0;
}

void disp(int arr[],int m){

    for(int i=0;i<m;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}

void merg(int arr[],int l,int mid,int e){
    int i=l,index=l,j=mid+1,temp[max],k;

    while(i<=mid && j<=e){

        if(arr[i]<arr[j]){
            temp[index]=arr[i];
            i++;
        }
        else{
            temp[index]=arr[j];
            j++;
        }
        index++;
    }
    if(i>mid){

        while(j<=e){
            temp[index]=arr[j];
            j++;
            index++;
        }
    }
    else{
        while(i<=mid){
            temp[index]=arr[i];
            i++;
            index++;
        }
    }
    for(k=l;k<index;k++){
        arr[k]=temp[k];
    }
    
}


void merg_sort(int arr[],int l,int e){

if(l<e){
    int mid=(l+e)/2;
    merg_sort(arr,l,mid);
    merg_sort(arr,mid+1,e);
    merg(arr,l,mid,e);
}
}





int main(){

int arr[max];

val(arr,max);

disp(arr,max);

merg_sort(arr,0,(max-1));

disp(arr,max);

    return 0;
}