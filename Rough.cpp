#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n ;
	cin>>n;
	int i = 0;
	int ans = 0;
	while(n !=0)
	{
		int digit = n%10;
		ans = digit + (ans*10);
		n = n/10 ;
		i++;
	}
	cout<<"Answer is : "<<ans<<endl;
	return 0;
}