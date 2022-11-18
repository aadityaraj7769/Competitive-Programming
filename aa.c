#include<stdio.h>
void merge(int arr[] , int first , int mid , int end)
{
    int B[end-first+1]; //Creating a B array of same size
    int i = first , j = mid+1, k = 0; // Initialize i , j and k(where k be the index of array B)

    // Compare both array and copy the smaller one in B array
    while(i<=mid && j<=end)
    {
        if(arr[i] <= arr[j])
        {
            B[k] = arr[i];
            k++; i++;
        }
        else{
            B[k] = arr[j];
            k++; j++;
        }
    }
    //copy remaining elements 
    while(i<=mid)
    {
        B[k] = arr[i];
        i++; k++;
    }
    //copy remaining elements
    while(j<=end)
    {
        B[k] = arr[j];
        j++; k++;
    }

    // Copy B array to oringinal
    for(int i = first; i<=end; i++)
    {
        arr[i] = B[i-first];
    }
}

void mergeSort(int arr[], int first , int end)
{
    if(first<end){
    int mid = (first+end)/2;
    mergeSort(arr , first , mid);
    mergeSort(arr, mid+1, end);
    merge(arr , first , mid , end);
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    int A[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }

    mergeSort(A , 0, n-1); // Calling mergesort function
    
    for(int i = 0; i<n; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
