# oops-lab-
coding with c++ by sir RITISH .
// program of factorial of a number  
//  by RITISH 200111273 j 
// oops lab 25/09/2021/

#include<iostream>
using namespace std ;

long long int fact (int n ) ;

int main ()
{
	long long int n , factorial ;
	cout<<"enter the number : ";
	cin >> n ;
	factorial = fact(n) ;
	
	cout<<"factorial of "<< n << "is "<< factorial <<"\n"; 
	return 0 ;
}

long long int fact (int n )
{
	long long int i , factorial  ; 
	if(n == 0  || n == 1 )
		return 1;
	else
	{
		factorial = n * fact(n-1) ;
	}
	return factorial ;
}




