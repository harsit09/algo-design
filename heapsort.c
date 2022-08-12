#include<stdio.h>
#include<time.h>
//to arrange in heap
void max_heapify(int arr[], int n, int i) 
{
    int par, left, right,tmp;
    // largest element will be the root
    par= i;
    // the element at this position is left child
    left =2*i +1;
    // this is right child
    right=2*i+2;

    // if the left child is larger than root
    if (left < n && arr[left] > arr[par])
    {
        /* code */
        par =left;  
    }
     // if rt is larger
    if (right < n && arr[right] > arr[par])
    {
        par = right;
    }
    // if largest is not the root
    if (par !=i) 
    {
        /* code */
        tmp = arr[i];
        arr[i] = arr[par];
        arr[par]= tmp;
        // recursive call to arrange the effected tree again
        max_heapify(arr, n , par);
    
    }
    
    
}

void heapsort (int arr[], int n) {
    int i , tmp;
    // ceateing heap
    for ( i = n / 2 - 1; i >= 0; i--)
    
        /* code */
        max_heapify(arr,n,i);
        // perfoem haeapsot 1 by 1
    for(i=n-1;i>=0;i--) 
    {
        // moving current root to end
            tmp=arr[0];
            arr[0]=arr[i];
            arr[i]=tmp;
            // rearranging the elements foe reduced heap
            max_heapify(arr,i,0);

    }
    
    
}

int main() 
{
    int arr[20] ,n ,i;
    double start,end;
    printf("\n enter the number of elements");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
     printf("\n enter the a[%d th] element", i);
     scanf("\n %d",&arr[i]);
        
    }
    printf("\n the unsorted array is ");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
        
    }
    
    start=clock();
    heapsort(arr,n);
    printf("\n the sorted array is : ");
    for ( i = 0; i < n; i++)
    {
        /* code */
        printf(" %d", arr[i]);

    }
    end= clock();
    printf("\n %lf SEC",(end-start)/CLOCKS_PER_SEC);
    
return 0;
}
