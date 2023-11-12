#include<stdio.h>
#include<stdlib.h>
#define max 10

void insertion(int arr[max],int *rear,int *front,int val){
        

    if(*rear<val){
        	int i=*rear;
        	int new_val;
        	printf("Enter the value :");
        	scanf("%d",&new_val);

        	arr[i]=new_val;
        	*rear=*rear+1;
        }
        else{
        	printf("Queue full delete some elements first \n");
       }

}       


void deletion(int arr[max],int *rear,int *front,int val){

   if(*front==0 && *rear==0 ){
    printf("Queue is empty \n");
}
 else{
 	if(*front < val){
      *front=*front+1;
	}
	else{
		printf("Max level reched \n");
	}
 }
}

void disp(int arr[max],int *rear,int *front,int val){
     
     int i=*front;
	for(i;i<(*rear);i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}

void is_emp(int arr[max],int *rear,int *front,int val){

	if(*front == 0 && *rear == 0){
		printf("YES! The queue is Empty \n");
	}
	else{
		int i=(*rear)-(*front);
		printf("The Number of elements presents %d ",i);
	}
}

void is_full(int arr[max],int *rear,int *front,int val){
	if(*rear == val && *front == 0){
		printf("The queue is full \n");
	}
	else{
		int i = (*rear)-val;
		printf("Empty stack present is %d",i);
	}
}

int main(){

	int arr[max],val,switch_val;
	int rear=0,front=0;

	printf("Enter number of values required for Queue (max values allowed 10) \n");
	scanf("%d",&val);
    

   
    do{
    	 printf("1.insertion in queue \n 2.Deletion in queue \n 3.display \n 4.check is empty \n 5.check is full \n 6.Exit :");
    scanf("%d", &switch_val);
    

    	switch(switch_val) {
    	case 1:
    		printf("Calling Insertion function \n");
    		insertion(arr,&rear,&front,val);
    		break;
    	case 2:
    		printf("Calling Deletion Function \n");
    		deletion(arr,&rear,&front,val);
    		break;
    	case 3:
    		printf("Displaying the Queue \n");
    		disp(arr,&rear,&front,val);
    		break;
    	case 4:
    		printf("Checking if queue is empty \n");
    		is_emp(arr,&rear,&front,val);
    		break;
    	case 5:
    		printf("Checking if queue is full \n");
    		is_full(arr,&rear,&front,val);
    		break;
    	case 6:
    		exit(1);
    		break;
    	}
    }while( switch_val != 6);
   return 0; 

}