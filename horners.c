// evaluating polynomials using horner's method.
#include<stdio.h>
#include<stdlib.h>
#define Max_value 50
int horners(int[],int,int);

int main(){
int arr_ele,pol_val;
int arr[Max_value];

printf("enter number of array elements required\n");
scanf("%d",&arr_ele);
	
if(Max_value<arr_ele || arr_ele<1){
	printf("enter new limit\n");
	exit(EXIT_FAILURE);
}

printf("Enter the value of x : ");
scanf("%d",&pol_val);
srand(arr_ele);

for(int i=0;i<arr_ele;i++){	
	arr[i]=rand()%10;
}

printf("the random values are : \n");
for(int i=0;i<arr_ele;i++){		
	printf("%d \n",arr[i]);
}
printf("The value of the equation is : %d",horners(arr,arr_ele,pol_val));
}

int horners(int arr[],int arr_ele,int pol_val){

	int final_out=arr[0];

	for(int i=1;i<arr_ele;i++){
		final_out=(pol_val*final_out)+arr[i];
	}

	return final_out;
};
