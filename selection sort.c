// Online C compiler to run C program online
#include <stdio.h>
#include <time.h>
double start,end;
void printarr(int *a ,int n ) {
    for(int i=0;i<n ; i++) {
        printf("%d ",a[i]);
    }
   printf("\n");
    
}


void selection(int *a, int n) {
    int indexOfMin,temp;
    printf("running selection sort ");
    
    start=clock();
    for(int i=0;i<n-1;i++) 
    {
        indexOfMin =i;
        printf("running selection sort pass no- %d\n",i);
    
        for (int j=i+1;j<n;j++) 
        {
            if(a[j]<a[indexOfMin]) 
            {
                indexOfMin=j;
            } 
        }
            temp=a[i];
            a[i]=a[indexOfMin];
            a[indexOfMin]=temp;
            
        end=clock();
    }
}
int main() {
    // Write C code here
    
    int a[]= {9,8,3,4,5,2,1};
    int n= 7;
    printarr(a,n);
    selection(a,n);
    printarr(a,n);
    

    return 0;
}
