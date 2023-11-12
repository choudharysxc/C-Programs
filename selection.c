#include<stdio.h>
#include<stdlib.h>
#define max 10

void arr_ele(int arr[max],int num){

	for(int i=0;i<num;i++){
		printf("Enter the value for %d :",i);
		scanf("%d",&arr[i]);
		
	}
}

void swap(int *x,int *y){
	int z=*y;
	*y=*x;
     *x=z;
}

void selec(int arr[max],int num){

	for(int i=0;i<num-1;i++){
		int min=arr[i];
		int loc=i;
		for(int j=i+1;j<num;j++){
              if(min>arr[j]){
              	min=arr[j];
              	loc=j;
              }
		}
		swap(&arr[loc],&arr[i]);
	}
}

void display(int arr[max],int val){

	for(int i=0;i<val;i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}

int main(){
 
    int num,arr[max];
	int val;
	printf("Enter the number of Array Elemnets required \n");
	scanf("%d",&num);
    
    do{
    
    	printf("1.Array Insertion \n 2.Selection sort \n 3.Display \n 4.Exit \n");
    	scanf("%d",&val);

    	switch(val){
    	case 1:
    		arr_ele(arr,num);
    		break;
    	case 2:
    		selec(arr,num);
    		break;
    	case 3:
    		display(arr,num);
    		break;
    	case 4:
    		exit(1);
    		break;
    	}
    }while(val != 4);
    return 0;
}