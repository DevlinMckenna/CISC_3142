#include <iostream>
using namespace std;
  
int main()
{
    int y;
    int x;
    cout << "Please Enter bottom of range\n";
    cin >> y;
     
   
    cout <<"Bottom number is:"<< y<< endl;
    
    cout<< "Please Enter Top of range\n";

    cin >> x;

    cout <<"Top  number is:\n"<< x << endl;
    cout<< "FUll range is:\n";
   
   for (int i = y; i <= x; i++) {
  cout << i <<"\n" ;
} 

    return 0;
}
