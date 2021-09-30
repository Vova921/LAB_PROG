#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float a, r, d1, d2;
  cout << "Enter the side of the square:"<<endl;
  cin >> a;
  cout << "Enter the radius of the circle:"<<endl;
  cin >> r;
  if((a<=0) || (r<=0)){
      cout<<"Incorrect data !!!";
  }
  else{
      d1 = a*sqrt(2);
      d2 = r*2; 
      if(d1<d2){
          cout<<"The square will pass through the circle";
      }
      else{
          cout<<"The square will NOT pass through the circle";
      }
  }
}