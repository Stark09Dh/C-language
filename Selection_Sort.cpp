#include<iostream>
using namespace std ; 
int selection_sort(int arr[],int size){
    for (int i = 0; i < (size-1); i++)
    {
        int minIndex = i;
        for (int j= i+1 ; j < size; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex = j ;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    
}
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
    
}


using namespace std;
int main(){
    int arr[] = {10,9,11,15};
    
    selection_sort(arr,4);
    printArray(arr,4);
    return 0;
}