#include<iostream>
using namespace std;
/*
int firstOccurence(int arr[], int size, int key){
    int strt = 0;
    int end = size-1;
    int ans = -1;
    int mid = strt + (end-strt)/2 ;
    while(strt <= end){
        if(arr[mid] == key){
            ans = mid ;
            end = mid-1;
        }
        else if(key > arr[mid]){
            strt = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
        mid = strt + (end-strt)/2 ;
    }
   return  ans ;
}

int lastOccurence(int arr[], int size, int key){
    int strt = 0;
    int end = size-1;
    int ans = -1;
    int mid = strt + (end-strt)/2 ;
    while(strt <= end){
        if(arr[mid] == key){
            ans = mid ;
            strt = mid+1;
        }
        else if(key > arr[mid]){
            strt = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
        mid = strt + (end-strt)/2 ;
    }
   return  ans ;
}

int main(){
    int even[6]={1,2,3,3,5,6};
    cout << "First Occurence of 3 is at index   " << firstOccurence(even,6,3)<<endl;
    cout << "Last Occurence of 3 is at index   " << lastOccurence(even,6,3)<<endl;
    return 0;
}*/
/*
int peakValue(int arr[],int size){
    int start = 0;
    int end = size -1 ;
    int mid = start +(end - start)/2 ; 
    while (start < end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1 ;
        }
        else{
            end = mid;
        }
        mid = start +(end - start)/2 ;
    }
    return start ;
}


int main(){
    int arr[7] = {1,2,3,7,5,6,2};
    cout << "Peak Value at index  "<< peakValue(arr,7);

}*/