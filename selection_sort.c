#include <stdio.h>
void selection_sort(int arr[], int n){ //creating a function for selection sort
  int temp, pos;
  for(int i=0;i<n-1;i++){
    pos = i; //for getting index at i
    for(int j=0;j<n;j++){
      if(arr[pos]>arr[j]){ 
        pos=j; 
      }
    }
  if(pos!=i){ //swap
    temp = arr[pos];
    arr[pos] = arr[i];
    arr[i] = temp;
  }
  }
}
int main(){
  int arr[] = {55,2,34,11,9,0,24,14}; //initialization of array
  int n = (sizeof(arr)/sizeof(arr[0])); // to geting length of array
  selection_sort(arr,n); // calling function 
  printf("sorted array");
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }
return 0;
}
    
}
