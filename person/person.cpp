#include "person.h"
#include <string>
using namespace std;

person::person() {
    f = "";
    m = "";
    l = "";
    a = 0;
    p = "";
}

person::person(string fName, string mName, string lName, int age, string number) {
    f = fName;
    m = mName;
    l = lName;
    a = age;
    p = number;
}
person::person(const person &E) {
    f = E.f;
    m = E.m;
    l = E.l;
    a = E.a;
    p = E.p;
}
void person::setFname(string fName) {
    f = fName;
}
void person::setMname(string mName) {
    m = mName;
}
void person::setLname(string lName) {
    l = lName;
}
void person::setAge(int age) {
    a = age;
}
void person::setNumber(string number) {
    p = number;
}
string person::getFname() {
    return f;
}
string person::getMname() {
    return m;
}
string person::getLname() {
    return l;
}
int person::getAge() {
    return a;
}
string person::getNumber() {
    return p;
}
