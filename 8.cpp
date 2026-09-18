#include <iostream>
using namespace std;
int main(){
int a = 4, b= 5;
cout<<"if we use and,or logical operators together for given values"<<endl;
// pehle 1st do ko check karega and fir uska result ko 3rd ke sath check karega
//jaise yaha && ka result false hai , 
//fir a>b ka result bhi false h , to final result false hoga
//chuki bich me or operator h , to agar ek bhi true hota to final result true hota
 

cout<<" the value is :"<<((a==b) && (a<b) || (a>b))<<endl;
return 0;
}