#include <iostream>
#include <string>

using namespace std;

int main(){
     string textToCopy="Java language";
     string enteredStr="";
    
    cout<<"Enter your language"<<endl;
    cin >> enteredStr;

    textToCopy.replace(0,4,enteredStr);
    //copiedText=textToCopy;

    cout<< "After replacing text: " << textToCopy <<endl;

    return 0;
}