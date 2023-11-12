#include<stdio.h>
#define max 10

void arr_ele(int arr[max],int num){

	for(int i=0;i<num;i++){
		printf("The vale for point %d :",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
}

int insertion(int arr[max],int val){

	for(int j=1;j<val;j++){
		int key=arr[j];
		int i=j-1;

		while(i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i--;
		}
		arr[i+1]=key;
	}
}

void display(int arr[max],int n){

	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}

int main(){

    int num,Arr[max],val;
    
	printf("enter the Number of Array elements required \n");
	scanf("%d",&num);

    do{
       

    	printf("Enter the operation you wanna perform \n");
    	printf("1.Insert Array elements \n 2.perform Insertion sort \n 3.Display the Array \n 4.exit \n");
        scanf("%d",&val);
    	if(val == 1){
    		arr_ele(Arr,num);
    	}
    	else if(val == 2){
             
             insertion(Arr,num);
    	}
    	else if(val == 3){
    		display(Arr,num);
    	}
    }while(val!=4);


}