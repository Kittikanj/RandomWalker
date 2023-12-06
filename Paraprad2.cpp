#include <iostream>
using namespace std;
template<class T>

T Max(T num1, T num2, T num3) {
    if (num1 > num2) {
        if (num1 > num3) {
            return num1;
        }
        else {
            return num3;
        }
    }
    else if (num2 > num3) {
        return num2;
    }
    else {
        return num3;
    }
}

class Employee {
private:
    string name = "no name";
    int salary = 0;
public:
    Employee() {
        cout << "Welcome to Paraprd land." << endl;
    }
    void setName(string n) {
        name = n;
    }
    void setSalary(int s) {
        salary = s;
    }
    string getName() {
        return name;
    }
    int getSalary() {
        return salary;
    }
    void showData() {
        cout << "\n----------------------\n";
        cout << "Name = " << name << endl;
        cout << "Salary = " << salary << endl;
        cout << "----------------------\n"<< endl;
    }
};

enum ATM {
    balance,
    deposite,
    withdraw
};

struct Prad {
    Prad():name("Paraprad"),Phone("0803742789") {}
    string name;
    string Phone;
};


int main()
{
    int num1, num2, num3,slr;
    string name;
    Prad P1;
    cout << "Hello World!\n";
    cout << "------------------\n";
    ATM choice = balance;
    cout << "your selected Service = " << choice << endl;
    cout << "My name is " << P1.name << endl;
    cout << "My phonenum is " << P1.Phone << endl;

    cout << "input num1 : ";
    cin >> num1;
    cout << "input num2 : ";
    cin >> num2;
    cout << "input num3 : ";
    cin >> num3;
    cout << "Max = " << Max(num1, num2, num3) << endl;

    Employee emp1;
    cout << "Name emp1 : ";
    cin >> name;
    emp1.setName(name);
    cout << "Salary emp1 : ";
    cin >> slr;
    emp1.setSalary(slr);
    emp1.showData();

    Employee emp2;
    cout << "Name emp2 : ";
    cin >> name;
    emp2.setName(name);
    cout << "Salary emp2 : ";
    cin >> slr;
    emp2.setSalary(slr);
    emp2.showData();

    return 0;
}
