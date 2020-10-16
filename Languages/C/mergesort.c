#include<stdlib.h>
#include<stdio.h>

mergesort(int arr[], int start, int end)
{
	int mid;
	if(start < end)
	{
		mid = (start + end)/2;
		mergesort(arr,start,mid)
		mergesort(arr,mid+1,end)
		merge(arr, start, end);
	}
}
merge(int arr[], int start, int end)
{
	int mid = (start+end)/2;
	int i = start;
	int i = start;
	int j = mid+1;
	while(i <= mid && j <= end)
	{
		if(arr[i] < arr[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
		}
	}
	while(i <= mid)
	{
		temp[k++] = a[i++];
	}
	while(j <= end)
	{
		temp[k++] = a[j++];
	}
	for(int i = start; i <= end; i++)
	{
		arr[i] = temp[i];
	}

}
void main()
{
	int arr[] =  {56,2,4,23,0,12,6,30};
	int n = sizeof(a)/sizeof(a[0]);
	mergesort(a,0,n-1)
	for(int i = 0; i < n;i++)
	{
		printf("%d",arr[i])
	}
}