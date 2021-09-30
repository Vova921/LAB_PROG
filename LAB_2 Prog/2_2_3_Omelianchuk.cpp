#include <iostream>

using namespace std;

int main()
{
   float x, y;
   cout <<"Enter the x coordinate:"<<endl;
   cin >> x;
   cout <<"Enter the y coordinate:"<<endl;
   cin >> y;
   
   if((y<=4) && (x>=1) && (x<=2)){
       cout<<"The dot ("<< x <<", "<< y <<") belongs to the shaded area";
   }
   else{
       cout<<"The dot ("<< x <<", "<< y <<") DOESN`T belongs to the shaded area";
   }
}