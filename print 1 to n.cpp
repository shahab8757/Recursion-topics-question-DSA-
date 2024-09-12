#include<iostream>
using namespace std;
 int  count(int n)
 {
  //base condition
 if(n==0)
 {
    return;
 }
 //recursive function



   count(n-1);
 cout<<n <<endl; 



 }


int main()
{

    system("cls");
    int n;
    cin>>n;
    count(n);
    
}