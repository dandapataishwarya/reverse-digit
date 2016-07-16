# reverse-digit
#include<stdio.h>
void main()
{
 int num[10],i,j,temp;
 printf("enter a number:");
 scanf("%d",&num);
 i=0;
 j=num-1;
 while(i<j)
 {
 temp=num[i];
 num[i]=num[j];
 num[j]=temp;
 i++;
 j--;
 }
 printf(" reversed number";num);
} 
