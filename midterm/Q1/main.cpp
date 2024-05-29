#include <iostream>
#include <vector>
#include <iterator>
#include "person.h"
#include "student.h"
#include "grad.h"

using namespace std;


int main(void)
{
	cout << "Welcome to main()!" << endl;
	int num = 0;
	while (true)
	{

		cout << "Enter num of Grad students ( <= 0 to quit): ";
		cin >> num;
		if (num <= 0)
			break; //exit the while loop

		vector<Grad> pa(num); //no objects yet
		Grad obj;
		for (size_t i = 0; i < num; i++)
		{
			cout << "Reading a new Grad student " << endl;
			//p.read();
			cin >> obj;
			pa.push_back(obj); //insert at the end of the vector pa
			Grad p = obj;
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
		for (Grad obj : pa)
		{
			cout << obj << endl;
		}
		cout << endl;

	}
	return 0;
}

