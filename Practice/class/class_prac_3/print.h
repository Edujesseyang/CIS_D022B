#ifndef PRINT_H
#define PRINT_H

#include <iostream>
#include <string>
#include "shape.h"
#include "rectangle.h"
using std::cout;
using std::string;

class Print : public Rectangle
{
private:
    string _printer;
    string _title;

public:
    Print() : _printer("N/A"), _title("N/A") {}
    Print(string name, string color, double height, double width, string printer, string title)
        : Rectangle(name, color, height, width), _printer(printer), _title(title) {}

    void setPrinter(string printer) { _printer = printer; }
    void setTitle(string title) { _title = title; }

    void printInfo() override
    {
        Rectangle::printInfo();
        cout << "Artist:\n"
             << _printer << "\nTile:\n"
             << _title << '\n';
    }
};

#endif // PRINT_H