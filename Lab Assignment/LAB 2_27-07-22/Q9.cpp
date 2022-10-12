//9.WAP to check whether a number n is prime number or not. 

#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, flag=0;  
  cout << "Enter a number to check Prime or Not : ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<n<<" is not Prime Number."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout<<n<<" is a Prime Number."<<endl;  
  return 0;  
}  