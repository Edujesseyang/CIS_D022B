#include <iostream>
#include <string>
#include "shape.h"
#include "rectangle.h"
using std::cout;
using std::string;

int main()
{
    Rectangle my_rec("Jes", "blue", 3, 4);
    double recSize = my_rec.getSize();
    cout << "Size before calc:\n" << recSize << '\n';

    my_rec.calcSize();
    double recSizeAfter = my_rec.getSize();
    cout << "Size before calc:\n" << recSizeAfter << '\n';

    return 0;
}