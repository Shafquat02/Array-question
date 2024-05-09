#include<stdio.h>
int main(){
   int array[40],pos,i,size,value;
   printf("enter no of elements in array:");
   scanf("%d",&size);
   printf("enter %d elements:",size);
   for(i=0;i<size;i++)
      scanf("%d",& array[i]);
   printf("enter the index to add an element:");
   scanf("%d",&pos);
   printf("enter the value into adding index:");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      array[i+1]=array[i];
   array[pos-1]= value;
   printf("final array after adding the value is");
   for(i=0;i<=size;i++)
      printf("%d\n",array[i]);
   return 0;
}
