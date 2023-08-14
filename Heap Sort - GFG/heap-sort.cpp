//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    // void heapify(int arr[], int n, int i)  
    // {
    //   // Your Code Here
    //   // o(N)
    //   int largest =i;
    //   int left = 2*i;
    //   int right= 2*i+1;
    //   if(left<n && arr[largest]<arr[left]){
    //       largest=left;
    //   }
    //   if(right<n && arr[largest]<arr[right]){
    //       largest =right;
    //   }
    //   if(largest!=i){
    //       swap(arr[largest],arr[i]);
    //       heapify(arr,n,largest);
    //   }
    // }

    // public:
    // //Function to build a Heap from array.
    // void buildHeap(int arr[], int n)  
    // { 
    // // Your Code Here
    //   for(int i=(n-2)/2;i>=0;i--)//starting with (n-2)/2 node as for ith node, the parent node is (i-1)/2
    //     {
    //         heapify(arr,n,i);//to create a max heap.
    //     }
    // }

    
    // public:
    // //Function to sort an array using Heap Sort.
    // void heapSort(int arr[], int n)
    // {
    //     //code here
    //       int temp;temp=0;
    //     buildHeap(arr,n);//to build a max heap
    //     for(int i=n-1;i>0;i--)// to swap the 1st element with largest element, 2nd with 2nd largest and so on.
    //     {
    //         temp=arr[0];
    //         arr[0]=arr[i];
    //         arr[i]=temp;//swap
    //         heapify(arr,i,0);
    // }
    // }
    void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      int lar = i;
      int l =2*i+1, r= 2*i+2;
      if(l<n && arr[l]>arr[lar])
            lar = l;
        if(r<n && arr[r]>arr[lar])
             lar = r;
        if(lar!= i){
            swap(arr[i], arr[lar]);
            heapify(arr,n,lar);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
    for(int i = (n-2)/2; i>=0;i--)
        heapify(arr,n,i);
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr,n);
        for(int i=n-1;i>=1;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends