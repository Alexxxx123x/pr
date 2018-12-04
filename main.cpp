/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
    
int main()
{
    cout<<"Hello World"<< "!\n";;
  vector<int> v(6);
  //v[0]=0;
  v[1]=1;
  v[2]=2;
  v[3]=3;v[4]=4;
  v[5]=5;
   //std::cout << "V=" << v[2] << "!\n";
   vector<int> v2(6,'x');
  for (int i=0;i<=5;i++)
  {
      std::cout << "V=" << v2[i] << "!\n";
      }

    return 0;
}
//stop