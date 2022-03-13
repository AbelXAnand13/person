
#pragma once
#include <string>
using namespace std;

class person{
public:
    person();
    person(string fName, string mName, string lName, int age, string number);
    person(const person &E);
    void setFname(string firstName);
    void setMname(string MiddleName);
    void setLname(string lastName);
    void setAge(int age);
    void setNumber(string phoneNumber);
    string getFname();
    string getMname();
    string getLname();
    int getAge();
    string getNumber();
private:
    string f, m, l, p;
    int a;
};
