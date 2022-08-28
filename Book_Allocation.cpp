#include<iostream>

using namespace std ; 

bool PossibleAns(int arr[],int n , int m ,int mid){
    int student = 1 ;
    int booksum = 0 ;
    for(int i = 0 ; i<n;i++){
        if(booksum + arr[i] <=mid){
            booksum += arr[i];
        }else{
            student++ ;
            if(student>m || arr[i] >mid){
                return false ;
            }
            booksum = arr[i];
        }
    }
    return true ;
}

int Book_Allocation(int arr[], int n , int m ){
    int start = 0;
    int sum = 0 ;

    for(int i = 0 ; i <n ; i++){
        sum += arr[i] ;
    }
    int end = sum ;
    int ans = -1 ;
    int mid = start + (end - start )/2;
    while (start <= end ){
        if(PossibleAns( arr, n , m , mid)){
            ans = mid ;
            end = mid -1 ;
        }
        else{
            start = mid +1 ;
        }
        mid = start + (end - start)/2 ;
    }
    return ans ;
}

int main(){
    int arr[4] = {10,20,30,40};
    int n = 4 ;
    int m = 2 ;
    cout << Book_Allocation(arr,n,m);
}

