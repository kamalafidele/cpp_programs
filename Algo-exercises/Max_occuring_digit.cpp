#include <iostream>
using namespace std;
int currentOccurrence ( int digit, int num ){
   int count = 0;
   while( num != 0 ){
       if(num%10 == digit)
        count++;

        num= num/10;  
   }

   return count;
};

int maxOccurringDigit(int num){
   int max = 0;
   int tempNum = num;
   int current_max = 0 ;
   int high_occurring = -1;

   while ( num >= 10){
       int reminder = num%2;
       int digit = num%10;
       if( high_occurring != digit){
         current_max=currentOccurrence(digit,tempNum);
         if(current_max > max){
             max= current_max;
             high_occurring = digit;
         }
         else if(current_max == max){
             high_occurring = -1;
         }
       }
       num = num/10;
   }

   return high_occurring;
};

int main( ) {
   int num = 123332;
   int result = maxOccurringDigit(num);

   cout << result <<endl;
    return 0;
}


