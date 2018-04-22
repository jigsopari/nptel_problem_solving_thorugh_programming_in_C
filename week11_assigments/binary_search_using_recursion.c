#include <stdio.h>
int binarySearch( int arr[], int n, int key, int low, int hg)
{
  int mid;
  
  if(low>hg)
    return 0;
  
  mid=(low+hg)/2;
  
  if(arr[mid]==key)
    return 1;
  
  else if( arr[mid] > key)
  {
    binarySearch(arr, n,key,low, mid-1);
  }
  
  else if( arr[mid] <key)
  {
    binarySearch(arr,n,key,mid+1,hg);
  }
}
int main()
{
    int arr[25], i, n, key, c, low, hg;

    scanf("%d", &n); /*Enter no. of elements from test case */
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); /* Enter elements in a sorted order */
    }
    scanf("%d", &key); /*Enter the element to search */
    low = 0, hg = n - 1;
    c = binarySearch(arr, n, key, low, hg);
    if (c == 0)
        printf("The key does not exists in the array.\n");
    else
        printf("The key found in the array.\n");
    return 0;
}
