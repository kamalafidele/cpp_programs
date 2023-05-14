// ################################### KAMARA FIDELE PROGRAM FOR KEYPAD KEY STROKES ######################################
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
    char charsArr[10][15]={{'+','!',':','<','>','"','|','{','}',';','\\',',','/','?'},{'a','b','c'},
                          {'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r'},{'s','t','u'},{'v','w','x'},{'y','z',','}};

    string input;
    string parsed;
    string output;

    cout<<"Enter the input:  ";
    getline(cin,input);

     stringstream str_stream(input);

     while(str_stream >> parsed){
         if(parsed.length() == 1){
           output+=parsed;
         }else if(parsed.length() > 1){
             string toBeConverted(1,parsed[0]);

             if(parsed.length() == 2){
                 if(parsed == "01"){
                     output+=" ";
                 }else{
                    output+=charsArr[stoi(toBeConverted)][0];
                 }
             }else{              
                 output+=charsArr[stoi(toBeConverted)][parsed.length() - 2];
             }
         }
       
     }
        
        /*
         ################## THIS IS THE OUTPUT ########################
         OUTPUT: 3helln world! 
        */
       cout<<output<<"  "<<endl;
    return 0;
}