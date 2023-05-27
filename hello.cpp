#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Program to check if \n you are eligible to vote:"<<endl;
  cout<<"enter your age"<<endl;
  cin>>a;
  if(a>=18)
      cout<<"Yes\n";
  else
      cout<<"No\n";
  return 0;
}
