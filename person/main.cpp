//abel anand
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "person.h"
using namespace std;

int main() {
    person human;
    ofstream out;
    out.open("/Users/Abel/Desktop/Cpp/person/person/person.txt");
    vector <person> ppls;
    bool quit = false;
    
    
    while (!quit) {
        
        int choice;
        cout << "1. Add info for person    2. Edit Info for person    3. Exit\n";
        cin >> choice;
        string fName;
        string mName;
        string lName;
        int age;
        string pNumber;
    
        int editRow;
        //menu
        switch (choice) {
            case 1:
                cout << "Enter first name\n";
                    cin >> fName;
                human.setFname(fName);
                    cout << "Do they have a middle name? \nyes(1)   no(2)\n";
                    cin >> choice;
                    switch(choice) {
                        case 1:
                            cout << "Enter middle name\n";
                            cin >> mName;
                            human.setMname(mName);
                            break;
                        case 2:
                            break;
                        default:
                            cout << "I'm going to assume that was a no\n";
                            break;
                    }
                    cout << "Enter last name\n";
                    cin >> lName;
                    human.setLname(lName);
                    cout << "Enter age\n";
                    cin >> age;
                    human.setAge(age);
                    cout << "Enter phone number\n";
                    cin >> pNumber;
                    human.setNumber(pNumber);
                    ppls.push_back(human);
                break;
                
                
            case 2:
                if(ppls.size() <= 0) {
                    cout << "Nothing to modify\n";
                }
                else {
                    for (int i = 0; i < ppls.size(); i++) {
                        cout << i+1 << ". First Name: " << ppls[i].getFname() << "\tMiddle Name: " << ppls[i].getMname() << "\tLast Name: " << ppls[i].getLname() << "\tAge: " << ppls[i].getAge() << "\tPhone Number: " << ppls[i].getNumber() << "\n";
                    }
                    cout << "Which row would you like to edit\n";
                    cin >> editRow;
                    if (editRow > ppls.size() || editRow < 1) {
                        cout << "Please follow directions\n";
                    }
                    else {
                    cout << "1. Edit First name\t2. Edit Middle name\t3. Edit Last name\t4. Edit age\t5. Edit Phone number\n";
                    cin >> choice;
                                switch (choice) {
                                        case 1:
                                            cout << "Enter new first name\n";
                                            cin >> fName;
                                            human.setFname(fName);
                                            break;
                                        case 2:
                                            cout << "Enter new middle name\n";
                                            cin >> mName;
                                            human.setMname(mName);
                                            break;
                                        case 3:
                                            cout << "Enter new last name\n";
                                            cin >> lName;
                                            human.setLname(lName);
                                            break;
                                        case 4:
                                            cout << "Enter new age\n";
                                            cin >> age;
                                            human.setAge(age);
                                            break;
                                        case 5:
                                            cout << "Enter new Phone Number\n";
                                            cin >> pNumber;
                                            human.setNumber(pNumber);
                                            break;
                                        default:
                                            cout << "try again";
                                            break;
                                        
                                }
                        ppls.push_back(human);
                break;
                        
                        
            case 3:
                if (ppls.size() == 0) {
                    cout << "Bye\n";
                }
                else {
                    for (int i = 0; i < ppls.size(); i++)
                        out << "First Name: " << ppls[i].getFname() << "\tMiddle Name: " << ppls[i].getMname() << "\t3.Last Name: " << ppls[i].getLname() << "\t4.Age: " << ppls[i].getAge() << "\t5.Phone Number: " << ppls[i].getNumber() << "\n";
                }
                quit = true;
                break;
            default:
                cout << "You are so basic\n";
                break;
        }
    }
        }
    }
}

