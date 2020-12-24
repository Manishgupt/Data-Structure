//a-append into the array
//b-insert an item
//c-count total item present in the arr
//d-get item at the given index
//e-delete an item at the given index
//f-edit an item
//g-search an item
#include<stdio.h>
#include<stdlib.h>
int size;
int *p;
static int s;

//insert fucntion
void insert(int pos,int value)
{
 for(int i=size;i>pos;i--)
 {
p[i]=(*p+(i-1));
 }
 p[pos]=value;
}

//get function
int get_item(int index)
{
return(p[index]);
}

//delete function
void delete_val(int index)
{
 for(int i=index;i<size;i++)
{
   p[i]=*p+(i+1);
}
 }

//search function
void search(int value)
{
for(int i=0;i<size;i++)
{
if(*(p+i)==value)
{
printf("Value is found");
return 0;
}
}
printf("\nValue is not found !!!");
}

//edit function
void edit(int value,int index)
{
p[index]=value;
}
void show()
{
for(int i=0;i<s;i++)
{
printf("\n%d",*(p+i));
}
}

void append(int data)
{
p[s]=data;
s++;
}
//main function
int main()
{
printf("enter size of the array: ");
scanf("%d",&size);
s=size;
p=(int *)malloc(size*sizeof(int));
printf("\nenter %d Data into the array:",size);
for(int i=0;i<size;i++)
{
scanf("%d",p+i);
}
//insert
/*int pos,value;
printf("enter pos and value:\n");
scanf("%d%d",&pos,&value);
insert(pos,value);
printf("\nAfter inserting value %d at index %d:",value,pos);*/

//get_item
int index;
printf("enter index no for viewing data:");
scanf("%d",&index);
printf("\nThe value at index %d is: %d",index,get_item(index));

//del
printf("enter index for delete the value:\n");
scanf("%d",&index);
delete_val(index);
printf("\nAfter deleting the value %d at index %d:",*(p+index),index);

/*int value;
printf("enter value for search:");
scanf("%d",&value);
search(value);*/

//edit_data
/*int index,data;
printf("enter index and value for modifying the data:");
scanf("%d%d",&index,&data);
edit(data,index);
printf("After modifying the value at index %d value is:%d",index,data);*/

//append
/*int data;
for(int i=0;i<5;i++)
{
printf("\nenter data to append:");
scanf("%d",&data);
append(data);
printf("\nafter appending the data %d",data);
}*/
show();
free(p);
return 0;
}
