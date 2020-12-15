#include<iostream>

using namespace std;

//the function 'func()' prints the required triangle 

void func(int n) 
{
  int i,j,k;
  int a=1, b=1;
  
  for(i=0; i<n; i++)
  {

    for(j=n-1; j>i; j--)
    {
      cout<<" ";
    }
    
    for(k=1; k<=a; k++)
    {
      cout<< abs(k-b);
    }
    
    a += 2;
    b++;
    
    cout<<endl;
   }
}

//main() gets the n value

int main()
{
  int n;
  
  cout<<"Enter the n value : ";
  cin>>n;
  
  func(n);
  
  return 0;
}

