#include <iostream>
#include <vector>
#include <iterator>
#include "person.h"
#include "student.h"
#include "Student.h"

using namespace std;


int main(void)
{
	cout << "Welcome to main()!" << endl;
	int num = 0;
	while (true)
	{

		cout << "Enter num of Student students ( <= 0 to quit): ";
		cin >> num;
		if (num <= 0)
			break; //exit the while loop

		vector<Student> pa(num); //no objects yet
		Student obj;
		for (size_t i = 0; i < num; i++)
		{
			cout << "Reading a new Student student " << endl;
			//p.read();
			cin >> obj;
			pa.push_back(obj); //insert at the end of the vector pa
			Student p = obj;
			pa[i] = obj;
		}

		cout << "contents of pa: " << endl;
		int size = pa.size();
		for (size_t i = 0; i < size; i++)
		{
			cout << "pa[" << i << "]: " << pa[i] << endl;
		}
		cout << endl;

		for (size_t i = 0; i < pa.size(); i++)
		{
			//pa[i].print(cout);
			cout << pa[i] << endl;
		}
		cout << endl;

		//different way to print containers like vector
		for (Student obj : pa)
		{
			cout << obj << endl;
		}
		cout << endl;

	}
	return 0;
}

