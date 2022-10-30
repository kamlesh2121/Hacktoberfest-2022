#include<stdio.h>
int main()
{
	 int arr[20]={1,2,4,7,3,5,6,2,9,1,2,3};
	 int freq[10]={0};
	 int k,i;
	 for(i=0;i<12;i++)
	 {
	 	k=arr[i];
	 	freq[k]++;
	 }
	 
	 for(i=0;i<12;i++)
	 {
	 	printf("%d ",freq[i]);
	 }
	 	printf("\n");
	 for(i=0;i<12;i++)
	 {
	 	while(freq[i]--)
	 	{
	 		printf("%d ",i);
		}
	 }
	 
}
