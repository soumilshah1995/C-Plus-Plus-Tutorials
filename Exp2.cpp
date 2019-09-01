/*
 * In This Tutorial we will learn about
 * Object Oriented Programming in C ++
 * We shall Learn about class
 */

#include <iostream>
#include <climits>
using namespace std;


class Car{

private:
    string Name;
    int Year;

public:
    Car(string name="test", int year=1234);

    const string &getName() const {
        return Name;
    }

    void setName(const string &name) {
        Name = name;
    }

    int getYear() const {
        return Year;
    }

    void setYear(int year) {
        Year = year;
    }
};

Car::Car(string name, int year):Name{name},Year{year} {
    cout << "Default constructor" << endl;
}

int main(){
    cout << "Exp2" << endl;
    Car obj;
    cout << obj.getYear() << " " << obj.getName() << endl;

    // Create new object

    Car bmw("BMW", 1995);
    cout << bmw.getYear() << " " << bmw.getName() << endl;
    bmw.setYear(2019);
    cout << bmw.getYear() << " " << bmw.getName() << endl;

    Car *audi {nullptr};
    audi = new Car;
    cout << audi->getName() << endl;

    return 0;
}



