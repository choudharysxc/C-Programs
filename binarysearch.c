#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define max_value 101
#define swipe(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
#define compare(x,y) ((x=y)?0:(x<y)?1:-1)
void sort(int[],int);
int binary(int[],int,int,int);

int main(void){

     int list[max_value];
     int n,search,right,left;
     // printf("set the seed value of rand\n");
     // scanf("%d",&num);
     

     printf("Enter the number of values required\n");
     scanf("%d",&n);
     srand(n);
     if(max_value<=n || n<1){
     	printf("Exceeded the array limit");
     	exit(EXIT_FAILURE);
     }
    printf("Unsorted array \n");
     for(int i=0;i<n;i++){
     	list[i]= rand()%1000;
     	printf("%d \n",list[i]);
     }

     sort(list,n);

     printf("the sorted list after selection sort is : \n");
     for(int i=0;i<n;i++){
     	printf("%d \n",list[i]);
     }
     printf("Enter the value to be searched \n");
     scanf("%d",&search);
     printf("enter left and right index \n");
     scanf("%d%d",&left,&right);

     printf("%d \n",binary(list,left,right,search));
}

void sort(int list[],int n){

    int temp=0;
	for(int i=0;i<n-1;i++){

		for(int j=i+1;j<n;j++){
			if(list[i]>list[j]){
				swipe(list[i],list[j],temp);

			}
		}
	}
};

int binary(int list[],int serc,int left,int right){
     
     int  middle;
     
     while(left<=right){
      middle=(left+right)/2;
       
     switch(compare(list[middle],serc)){
     case 0: {
        return middle;
        break;
    }
    case 1:{left=left+1;
        right=right+1;
     break;
    }
     case -1:{left=left-1;
        right=right-1;
      break;
     }
     }
 }
return -1;

}
