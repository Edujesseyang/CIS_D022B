#include <iostream>
#include <string>
#include "shape.h"
#include "rectangle.h"
#include "print.h"
using std::cout;
using std::string;

int main()
{

    // ********* TEST target: Rectangle() *************
    Rectangle my_rec1;
    my_rec1.setName("GO");
    my_rec1.setColor("GO");
    my_rec1.setHeight(10.5);
    my_rec1.setWidth(23.4);
    cout << " ************** Case 1 : default class*******************\n";
    cout << " =============== Before calc ====================\n";
    my_rec1.printInfo();
    my_rec1.calcSize();
    cout << " =========== After calc size ================\n";
    my_rec1.printInfo();
    cout << " ============= Case 2: arg defined ================\n";
    Rectangle my_rec2("NAME", "COLOR", 3, 3);
    my_rec2.printInfo();

    // ************ TEST target: Print() ***************
    Print test_print;
    test_print.setName("GO");
    test_print.setColor("GO");
    test_print.setHeight(4.5);
    test_print.setWidth(3.5);
    test_print.setPrinter("GO");
    test_print.setTitle("GO");
    cout << " **************** TEST Print() ********************************\n";
    cout << " =============== Before calc ====================\n";
    test_print.printInfo();
    test_print.calcSize();
    cout << "==================After calc ===================\n";
    test_print.printInfo();
    cout << " ========== case 2 : arg defined ================\n";
    Print my_print("NAME", "COLOR", 4, 4,"PRINTER", "TITLE");
    my_print.printInfo();
    cout << " =========== After calc =============\n";
    my_print.calcSize();
    my_print.printInfo();


    return 0;
}