/*
 * In This Tutorials we will learn about Pointer
 * hwo to use pointer in classes
 * when using pointer we need to use Copy Const
 * When to use Deep Copy vs Shallow Copy
 */

#include <iostream>
using namespace std;

class Developer{

public:

    Developer(string name="test",  int age=1);  // Constructor
    Developer(const Developer &source);         // Copy Constructor

    const string &getName() const {
        return Name;
    }

    void setName(const string &name) {
        Name = name;
    }

    int getAge() const {
        return Age;
    }

    void setAge(int age) {
        Age = age;
    }

private:
    string Name;
    int Age;

};


// Fucntion Prototype
void display(Developer d);


// Constructor
Developer::Developer(string name, int age):Name{name}, Age{age} {
    cout << "Constructor" << endl;
}

Developer::Developer(const Developer &source):Name{source.Name}, Age{source.Age} {
    cout << "Copy Constructor " << endl;
}

void print(Developer d){
    cout << "Developer Name" << " :" << d.getName() << endl;
    cout << "Developer Age" << " :" << d.getAge() << endl;
}


int main(){
    cout << "Exp3" << "\n" << endl;

    cout << "Copy Constructor Example " << "\n" << endl;

    Developer soumil("Soumil Shah", 25);

    print(soumil);


    return 0;
}