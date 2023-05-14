#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
      string name;
      int age;
    
    public:
      Person () {}
      Person(string personName, int personAge) {
        name = personName;
        age = personAge;
      }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setName (string personName) {
        name = personName;
    }

    void setAge (int personAge) {
        age = personAge;
    }
};

int main () {
    Person person("Kamara fidele", 45);

    cout << "Name: " << person.getName() << " Age: " << person.getAge() << endl;
    return 0;
}