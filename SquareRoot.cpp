#include<iostream>
using namespace std;


int sqrt(int n){
    int start = 0 ;
    int end = n ;
    int mid = start + (end-start)/2 ;
    int ans = -1;
    while (start <= end ){
        int square = mid*mid ;
        if(square == n){
            return mid ;
        }
        if(square < n){
            int ans = mid ;
            start = mid + 1 ;
        }
        else{
            end = mid -1;
        }
        mid = start +(end - start)/2 ;
    }
    return ans ;
}

double morePrecision(int n , int precision , int temp){
    double factor =1 ;
    double ans = temp ;
    for (int i = 0; i < precision; i++)
    {
        factor = factor/10 ;
        for (double j = ans; j *j<n; j = j+factor)
        {
            ans = j ;
        }
        
    }
    return ans ;
}


int main(){
    int n ;
    cin >> n ;
    int temp = sqrt(n);
    cout << "Answer is :  "<< morePrecision(n,3,temp);

    return 0;
}