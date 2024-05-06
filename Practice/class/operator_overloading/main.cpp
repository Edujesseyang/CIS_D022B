#include <iostream>
#include <string>
#include "person.h"

using namespace std;

void testCase1()
{
    // basic functioning test:
    // default constructor, destructor, copy constructor, assign operator, iostream operators, sets.
    cout << "***************** test case 1 *************\n";
    Person person1;
    cout << "default constructor and << operator: \n";
    cout << person1 << '\n';

    cout << "set with param: \n";
    person1.set("jesse", "male", 35);
    cout << person1 << '\n';

    cout << "Copy constructor: \n";
    Person person2(person1);
    cout << person2 << '\n';

    cout << "assign operator:\n";
    Person person3 = person2;
    cout << person3 << '\n';

    cout << "set with other obj:\n";
    Person person4;
    person4.set(person3);
    cout << person4 << '\n';

    cout << ">> operator:\n";
    Person person5;
    cout << "Enter the person's info: (name gender age):\n";
    cin >> person5;
    cout << person5 << '\n';

    cout << "getter and setter test:\n";
    Person person6;
    person6.setName(".setName() Pass");
    person6.setGender(".setGender() Pass");
    person6.setAge(99);
    cout << person6.getName() << '\n';
    cout << person6.getGender() << '\n';
    cout << person6.getAge() << '\n';
    cout << person6.getInfo() << '\n';

    cout << "************** test case 1 completed **************\n";
}

int main()
{
    testCase1();
    return 0;
}