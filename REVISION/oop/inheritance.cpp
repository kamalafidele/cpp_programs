#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
      string type;
    
    public:
       Animal() {}
       Animal(string animalType) {
        type = animalType;
       }

       void setType(string animalType) {
         type = animalType;
       }

       string getType () {
        return type;
       }
};

class Dog: public Animal {
    private:
      string color;

    public:
      Dog(string type, string dogColor) {
        color = dogColor;
        setType(type);
      }

      string getColor () {
        return color;
      }
};

int main () {
    Dog dog("Mammal", "Yellow");

    cout << "Type: " << dog.getType() << " Color: " << dog.getColor() << endl;
    return 0;
}