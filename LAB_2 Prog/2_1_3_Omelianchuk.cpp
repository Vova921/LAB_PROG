#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   float x, y;
   cout <<"Enter an argument value:"<<endl;
   cin >> x;
   
   if(x <= -3){
       y = pow(x,3)-29;
   }
   else if(x <= 6){
       y = 2*x+3;
   }
   else{
       y = pow(x,2)+1;
   }
   cout<<fixed;
   cout.precision(2);
   cout<<"Y = "<<y;
}