#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   ifstream myFile("Example.txt");
   string readText;
   string parsed;


   int maxiMum=max(12,45);
   
   while(getline(myFile,readText)){
       stringstream ssss(readText);

       while(ssss>> parsed){
           cout<<parsed<<endl;
       }
       //cout<<readText<<endl;
   }
   cout<<maxiMum;
    return 0;
}