#include<iostream>

using namespace std;

int Insertion_sort(int arr[],int size){
    for (int i = 1; i < size; i++){   // for different rounds
        int temp = arr[i];
        int j = i-1;
        for ( ;j >=0; j--){ // for comparing i to i-1;
            if(arr[j]>temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        } 
        arr[j+1]=temp;
    }
}

int main(){
    int arr[7] = {10,1,7,4,8,2,11};
    Insertion_sort(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i]<< " ";
    }

    
    return 0;
}