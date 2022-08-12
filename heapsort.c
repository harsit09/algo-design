#include<stdio.h>
void max_heapify(int arr[], int n, int i) 
{
    int par, left, right,tmp;
    par= i;
    left =2*i +1;
    right=2*i+2;

    if (left < n && arr[left] > arr[par])
    {
        /* code */
        par =left;  
    }
    
    if (right < n && arr[right] > arr[par])
    {
        par = right;
    }

    if (par !=i) 
    {
        /* code */
        tmp = arr[i];
        arr[i] = arr[par];
        arr[par]= tmp;
        max_heapify(arr, n , par);
    
    }
    
    
}

void heapsort (int arr[], int n) {
    int i , tmp;
    for ( i = n / 2 - 1; i >= 0; i--)
    
        /* code */
        max_heapify(arr,n,i);
    for(i=n-1;i>=0;i--) 
    {
            tmp=arr[0];
            arr[0]=arr[i];
            arr[i]=tmp;

            max_heapify(arr,i,0);

    }
    
    
}

int main() 
{
    int arr[20] ,n ,i;
    printf("\n enter the number of elements");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
     printf("\n enter the a[%d th] element", i);
     scanf("\n %d",&arr[i]);
        
    }
    heapsort(arr,n);
    printf("\n the sorted array is : ");
    for ( i = 0; i < n; i++)
    {
        /* code */
        printf("\n %d", arr[i]);

    }
    
return 0;
}