
#include<stdio.h>
#include<stdlib.h>
struct data{
char ownername[100];
char address[100];
int mobile[100];
float value;
    
}d;
struct node{
struct data;
int nodeid,childnodeid;
struct node*node
struct node* next;

}*ptr,*nptr,Referencenodeid,ReferenceChildId;

option1_createfirstnode(){ 
int i=1,n;
scanf("%d",&n);//size of name or characters
Referencenodeid.next=null; 
ptr=(struct node)malloc(sizeof(struct node*));
for(int j=0;j<n;j++)
scanf("%s",&ptr->d.ownername[j]);
for(int j=0;j<n;j++)
printf("%s",ptr->d.ownername[j]);// give data
for(int j=0;j<n;j++)
scanf("%s",&ptr->d.address[j]);
for(int j=0;j<n;j++)
printf("%s",ptr->d.address[j]);// give data
for(int j=0;j<n;j++)
scanf("%d",&ptr->d.mobile[j]);
for(int j=0;j<n;j++)
printf("%d",ptr->d.mobile[j]);// give data
scanf("%f",&ptr->d.value);
printfptr->next=null;
ptr->nodenumber=i;// nodenumber assign
Referencenodeid.next=ptr; // address aassign
ptr=ptr->next; //increment the pointer
}

option3_addnewnode(int value){
ptr=&Referencenodeid; //or we can use ptr=Referenceid.next;
while(ptr->data<value){
ptr=ptr->next;
}
nptr=(struct node)malloc(sizeof(struct node*));
nptr->data=value;
nptr->nodenumber=(ptr->nodenumber)+1;
nptr->next=null;
}

option2_multiset(){
option1_createfirstnode();
copyptr->dta=ptr->data;
copyptr->nodenumber=(ptr->nodenumber)+1;

}

option6_break(int value){
ptr=&Referencenodeid; //or we can use ptr=Referenceid.next;
pptr=&ptr;   //previous pointer
while(ptr->data<value){
ptr=ptr->next;
pptr=pptr->next;
}
pptr->next=ptr->next;
free(ptr);// break node
}

option8_longest(){
    int length=0;
    ptr=&Referenceid;
    while(ptr->next!=null){
        ptr=ptr->next;
        length++;
    }
    printf("%d",length);//longest chain
}

option10_merge(struct node*,struct node1*){
if((ptr->data) > (ptr1->data1)){ //compare data of fist list and other list  data1,ptr1 is for secomd list and store into third list
    ptr3->data=ptr1->data1;
    ptr3=ptr3->next;
}
if(ptr->data < ptr1->data1){
ptr3->data=ptr->data;
ptr3=ptr3->next;    
}
if(ptr->data == ptr1->data1){
ptr3->data=ptr->data;
ptr3=ptr3->next;    
}

while(ptr3!=null){
    printf("%d",ptr3->data);
    ptr3=ptr3->next;
    
}
}


int main(){
    int value;
    scanf("%d",&value);
    option1_createfirstnode();
    option6_break(int value);
    option8_longest();
    option2_multiset();
    option10_merge(struct node*,struct node1*);
    option3_addnewnode(int value);
}
