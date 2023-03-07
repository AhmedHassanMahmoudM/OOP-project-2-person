// OOP Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Person {
protected:
    string First_name;
    string Last_name;
    int Telephone;
    string address;
public:
    Person() {
        cout << "Welcome in my class" << endl;
    }
    Person(string fn, string ln, int te, string add) {
        // this is the constructors by parametars:
        First_name = fn;
        Last_name = ln;
        Telephone = te;
        address = add;
    }

    void set_firstName(string fn) {
        First_name = fn;
    }
    string get_firstName() {
        return First_name;
    }

    void set_lastName(string ln) {
        Last_name = ln;
    }
    string get_lastName() {
        return Last_name;
    }

    void set_address(string add) {
        address = add;
    }
    string  get_address() {
        return address;
    }

    void set_telephone(int te) {
        Telephone = te;
    }
    int get_telephone() {
        return Telephone;
    }
    // pure virtual function:
    virtual string full_name() = 0;
    virtual void display() = 0;
    
};

class Professor :public Person {
private:
    int salary;
public:
    Professor(int sa) {
        salary = sa;
    }
    void set_salary(int sal) {
        salary = sal;
    }
    int get_salary() {
        return salary;
    }

    void display() {

        cout << "Professor First_name is: " << First_name << endl;
        cout << "Professor Last_name is: " << Last_name << endl;
        cout << "the telephone numberof the Professor is :" << Telephone << endl;
        cout << "the address of Professor is :" << address << endl;
        cout << "the salary of professor is : " << salary << endl;
    }
    string full_name() {
        string full_name = First_name + Last_name;
        return full_name;
    }

};

class Student :public Person {
private:
    int Id;
    string department;
    string level;
public:
    Student(int id,string dep,string lev) {
        Id = id;
        department = dep;
        level = lev;
    }

    void set_id(int id) {
        Id = id;
    }
    int get_id() {
        return Id;
    }

    void set_department(string dep) {
        department = dep;
    }
    string get_department() {
        return department;
    }

    void set_level(string lev) {
        level = lev;
    }
    string get_level() {
        return level;
    }

    void display() {
        cout << "Student First_name is: " << First_name << endl;
        cout << "Student Last_name is: " << Last_name << endl;
        cout << "the telephone number of the student is :" << Telephone << endl;
        cout << "the address of student is :" << address << endl;
        cout << "the student id is :" << Id << endl;
        cout << "the student departement is :" << department << endl;
        cout << "the level of student is :" << level << endl;
    }
    string full_name() {
        string full_name = First_name + Last_name;
        return full_name;
    }
};

int main()
{
    /*
    Ahmed Hassan Mahmoud Mostafa
    ID:202121703
    section "A"
    */
    Professor p1(5000);
    p1.set_firstName("Ahmed");
    p1.set_lastName("Hassan");
    p1.set_telephone(01150766226);
    p1.set_address("Asyut");
    p1.display();
    cout << p1.full_name() << endl;

    cout << endl;
   Student s1(202121703, "CS", "3");
   s1.set_firstName("Ahmed");
   s1.set_lastName("Hassan");
   s1.set_telephone(01150766226);
   s1.set_address("Asyut");
   s1.display();
   cout << s1.full_name() << endl;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
