#include <stdio.h>
#include <limits.h> // For INT_MAX

//returns minimum of two numbers
int min(int a ,int b)
{
    	if(a < b)
        		return a;
    	return b;
}

int minDist(int arr[], int n, int x, int y)
{
    	//previous index and min distance
   	 int i=0,p=-1, min_dist=INT_MAX;
    
    	for(i=0 ; i<n ; i++)
    	{
        		if(arr[i] ==x || arr[i] == y)
        		{
            		if(p != -1 && arr[i] != arr[p])
               			 min_dist = min(min_dist,i-p);
            		p=i;
        		}
    	}
    	//If distance is equal to int max 
    	if(min_dist==INT_MAX)
       		return -1;
    	return min_dist;
}
int main()
{
    	int arr[] ={3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
   	int n = sizeof(arr)/sizeof(arr[0]);
    	int x = 3;
   	int y = 6;
   	printf("Minimum distance between %d and %d is %d\n", x, y, minDist(arr, n, x, y));
    	return 0;
}
