#include <iostream>
#include <string>

using namespace std;


int main(){
   int firstYear;
   int lastYear;
   cout<<"Enter the starting year: ";
   cin>>firstYear;
   cout<<"Enter the last year: ";
   cin>>lastYear;

   int period=lastYear-firstYear;
   int temp=firstYear;
   int learpYears[]={};
   int count=0;
   
   for(int i=1; i<period; i++){
       firstYear=firstYear+i;
       if(firstYear % 4 == 0){
           learpYears[count]=firstYear;
           count++;
       }
    firstYear=temp;
   }
   

   if(count == 0){
       cout<<"No leap years between "<<temp<<" "<<lastYear<<endl;
   }else{
       cout<<"Leap years between "<<temp<<" "<<lastYear<<endl;
       for(int j=0; j<count; j++){
           cout<<learpYears[j]<<endl;
       }
   }
    return 0;
}