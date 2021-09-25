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





	
	
	
	
	
	
	
	
	
	
	//  by RITISH 200111273 j 
// oops lab 25/09/2021
//program to show function  overloading

#include<iostream>
using namespace std ;
#define pi 3.147 

void area(int a);
void area(int b , int c);
void area(float x);
int main()
{
	int side , length ,  breadth;
	float radius ;
	cout << "enter side of square : " ;
	cin >> side ;
	cout << "enter length and breadth of the rectangle  : " ;
	cin >>  length >> breadth ;
	cout << "enter radius of circle : " ;
	cin >> radius  ;
	
	area(side);
	area(length , breadth);
	area(radius);
	
	return 0;
}

void area(int a)
{
	cout<< " area of square is : " << a * a ;
	cout << " \n" ;
}
void area(int b , int c)
{
	cout<< " area of rectangle is : " << b * c ;
		cout << " \n" ;
}
void area(float x)
{
	cout<< " area of circle is : " << pi *x * x ;
		cout << " \n" ;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// code by ritish 200111273 j
// oops lab 25/09/2021
// program to rotate an array 

#include<iostream>
using namespace std ; 

int main ()
{
	int n , i , j , k, temp ;
	cout  << " enter size of array : ";
	cin >> n ; 
	int arr[n] ;
	cout << "enter the elements of the array \n" ;
	for(i =0 ;i<n ;i++ )
	{
		cin >>  arr[i] ;
	}
	cout << "\n";
	cout << " original array is   :" ;
		for(i =0 ;i<n ;i++ )
	{
		cout << arr[i]<< " " ;
	}
	
	cout << "\n";
	cout << "no. of times you want to rotate  : ";
	cin >> k ;
	for(j=0;j < k; j++)
	{
	
	temp = arr[0] ;
	
	for( i = 0;i <n-1 ;i++)
	{
		
		arr[i] =arr[i+1] ;
	}
	arr[n-1] = temp ; 

	}
	
	cout << "array after rotration is :  \n " ;
	
	for(i =0 ;i<n ;i++ )
	{
		cout << arr[i]<< " " ;
	}
	cout << "\n";
	return 0 ;
}
