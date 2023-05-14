#include <iostream>
using namespace std;

int isDigitSum(int param1, int param2){
  int sum;
  int remainder;

  while(param1 > 0){
      remainder=param1%10;
      param1=param1/10;
      sum+=remainder;  
  }

   if(sum < param2 )
     return 1;
    else
    return 0; 
};

int main(){
    int result=isDigitSum(32121,9);
    if(result == 1)
      cout<<"It is digit sum"<<endl;
    else
      cout<<"It is not digit sum"<<endl;

    return 0;
}