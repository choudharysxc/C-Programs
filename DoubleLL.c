#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct obb{
	struct obb *prev;
	int dta;
	struct obb *next;
};

struct obb *creatnode(int val){

    struct obb *temp=(struct obb *)malloc(sizeof(struct obb));
    temp->prev=NULL;
    temp->dta=val;
    temp->next=NULL;

    return temp;

}

struct obb * add_head(struct obb *head){
 
    int val;
    struct obb *ptr=head;
    printf("Enter the value :");
    scanf("%d",&val);
    struct obb *temp=creatnode(val);

    if(head == NULL){
     head=temp;
    return temp;
    }

else{
     while(ptr->next != NULL){
        ptr=ptr->next;
     }
    
    temp->prev=ptr;
    ptr->next=temp;

      return temp;
    	}

	
}

void Dele_node(struct obb *head){

 struct obb *temp2;
 struct obb *temp=head;
	while(temp->next->next != NULL){
		temp=temp->next;
	}
    
    temp2=temp->next;
     temp->next=NULL;
    free(temp2);
   

}

void insert_any(struct obb *head){
    
    int val,elem;
    printf("Enter The element : ");
   scanf("%d",&elem);
    struct obb *temp=creatnode(elem);
    struct obb *temp2=head;
    struct obb *temp3=NULL;
   printf("Enter the position to insert the element :");
   scanf("%d",&val);
   
   if(val > 1)
  val=val-1;

   while(val != 0){
   temp2=temp2->next;
   val--;
   }
   temp3=temp2->next;

   temp->prev=temp2;
   temp->next=temp3;
   temp2->next=temp;
   temp3->prev=temp;
}

void Display(struct obb *head){
    
    while(head != NULL){
    	printf("%d \t", head->dta);
    	head=head->next;
    }
    printf("\n");
}

void Dele_Apos(struct obb *head) {
    int val;
    struct obb *node = head;

    printf("Enter the position you want to delete the node: ");
    scanf("%d", &val);

    // Decrement val to match 0-based indexing
    val--;

    // Traverse to the node just before the target position
    while (val > 0 && node != NULL) {
        node = node->next;
        val--;
    }
struct obb *node2=node->next;
    // Check if node is NULL, meaning position is out of bounds
    if (node == NULL) {
        printf("Invalid position!\n");
        return;
    }

    // Handle case where the target node is the last node
    if (node->next == NULL) {
        node->prev->next = NULL;
    } else {
        // Update next node's prev pointer
        node2->prev = node->prev;
        // Update previous node's next pointer
        node->prev->next = node2;
    }

    // Free memory occupied by the target node
    free(node);
    
    printf("Node at position %d deleted successfully.\n", val + 1);
}


struct obb * insert_beg(struct obb *head){

    int val;
    // struct obb *temp=(struct obb *)malloc(sizeof(struct obb));
    
     printf("Enter the Value for the Node\n");
     scanf("%d",&val);
     struct obb *temp=creatnode(val);

     temp->next=head;
     head->prev=temp;

     return temp;
}

int main(){

struct obb *head=NULL;
int val;
do{

 printf("Enter \n 1.Insertion \n 2.Deletion \n 3.Insertion at random position \n 4.Deletion at random postion \n  5.Insertion from Beginning \n 6.Display \n 7.Exit \n");
 scanf("%d",&val);

 switch(val){
 case 1:
      if(head == NULL)
      	head=add_head(head);
      else
      	add_head(head);
 	break;
 case 2:
    Dele_node(head);
 	break;
 case 3:
   insert_any(head);
 	break;
 case 4:
    Dele_Apos(head);
    break;
case 5:
   head = insert_beg(head);
   break;
 case 6:
 	Display(head);
 	break;
 case 7:
    printf("Thank you \n");
    exit(1);
 }
}while(true);

return 0;
}