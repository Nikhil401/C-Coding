
#include<stdio.h>
#include<limits.h>
void ArrayLeader(int arr[],int size);
void PrintArray(int arr[],int size);
int main(void)
{
int arr[] = {16,17,4,3,5,2};
int size = 6;
printf("\n\n....... Array Element .........\n\n");
PrintArray(arr,size);
printf("\n\n....... Leader in Array .......\n\n");
ArrayLeader(arr,size);
printf("\n\n...............................\n\n");
return 0;
}

void ArrayLeader(int arr[],int size)
{
int MaxTillNow,i;
MaxTillNow = INT_MIN;
for(i=size-1;i>=0;--i)
{
if(arr[i] > MaxTillNow)
{
printf("%d ",arr[i]);
MaxTillNow = arr[i];
}
}
}

void PrintArray(int arr[],int size)
{
int i;
for(i=0;i<size;++i)
printf("%d ",arr[i]);
}
