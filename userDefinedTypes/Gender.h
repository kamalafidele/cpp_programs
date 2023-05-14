#include <string>

using namespace std;

enum Gender{
 MALE,FEMALE,OTHERS
};
Gender stringToEnumConverter(string gender){
 if(gender=="MALE")
    return MALE;
 else if(gender == "FEMALE")
    return FEMALE;
 else 
   return OTHERS;
}

string enumToString(Gender gender){
    if(gender==MALE)
      return "MALE";
    else if(gender==FEMALE)
     return "FEMALE";
    else 
     return "OTHERS";
}