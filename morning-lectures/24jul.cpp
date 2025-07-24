#include <iostream>
#include <string>
using namespace std;

class Customer {
    static int count; // shared across all objects
    int id;           // unique ID for each object
private:
    string* name = new string;
    int age;
    char gender;
    int credits;
public:
    Customer(string n, int a, char g, int c) {
        *this->name = n;
        this->age = a;
        this->gender = g;
        this->credits = c;
        id = ++count;
        cout << *this->name << " Created!" << endl;
    }

    Customer(){
        id = ++count;
    }

    // Customer operator=(Customer& x){
    //     this->name = x.name;
    //     this->age = (2*x.age);
    //     this->gender = x.gender;
    //     this->credits = x.credits;
    // }

    Customer(Customer& other){
        *this->name = *other.name;
        this->age = other.age;
        this->gender = other.gender;
        this->credits = other.credits;
        id = ++count;
        cout << *this->name << " Created!" << endl;
    }

    void displayInfo() {
        cout << "\nCustomer Information:\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << *name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Credits: " << credits << endl;
    }

    static int getCount() {
        return count;
    }

    ~Customer(){
        cout << *this->name << " is Deleted!" << endl;
        delete this->name;
        count--;
    }
};

// Define and initialize static member
int Customer::count = 0;

int main() {
    Customer c1("Aditya", 21, 'M', 2000);
    Customer c2("Anshika", 20, 'F', 2500);
    
    c1.displayInfo();
    c2.displayInfo();
    {
        Customer c3("Abhishek", 22, 'F', 1500);
        c3.displayInfo();
        cout << "\nTotal customers created inside block: " << Customer::getCount() << endl;

    }
    
    cout << "\nTotal customers created: " << Customer::getCount() << endl;



    return 0;
}
