#include<iostream>
using namespace std;

class test
{
  int a,b;
public:

 void get(int x,int y);
void put(test t1,test t2);
void display();
};

void test:: get(int x,int y)
{
  a=x;
b=y;
}
void test::put(test t1,test t2)

 {
   a=t1.a+t1.b;
  b=t2.a+t2.b;
}
void test:: display()
{
cout<<a<<endl;
cout<<b<<endl;
}
int main()
{
  test t1,t2,t3;
 t1.get(12,40);
t2.get(30,50);
t1.put(t1,t2);
t2.put(t1,t2);
t1.display();

return 0;
}

