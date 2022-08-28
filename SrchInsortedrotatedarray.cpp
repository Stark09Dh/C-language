#include<iostream>
using namespace std;

int pivot_point(int arr[] , int size){
    int start = 0 ;
    int end = size - 1 ;
    int mid = start + (end - start) / 2 ;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1 ;
        }
        else {
            end = mid ;
        }
        mid = start + (end- start) / 2 ;
    }
    return start ; 
}

int binarySearch(int arr[],int start,int end, int key){
    int strt = start;
    int ed = end ; 
    int mid = strt + (ed-strt)/2 ; 
    while(strt <=ed){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            strt = mid+1;
        }
        else{
            ed = mid-1;
        }
        mid = strt + (ed-strt)/2;
    }
    return  -1 ;

}
int main(){
    int key = 2 ;
    int n = 5;
    int arr[5] = {7,9,1,2,3};
    int pivot = pivot_point(arr,5);
    if(key >= arr[pivot]  && key <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, 2);
    }
    // else{
    //     return binarySearch(arr , 0, pivot-1, 2); 
    // }
    cout << pivot ;
}