#include <iostream>
#include <string>
#include "animal.h"
#include "cat.h"

int main(void)
{
    Cat cat1;
    Cat cat2("Lucky", 5, 15.3, "grey", "Jesse", true);
    Cat cat3("sushi", 3, 13.3, "brown", "Jesse", false);
    Cat cat4("Klee", 2, 8.3, "black/brown", "Chloe", false);

    cat1.print_info();
    cat2.print_info();
    cat3.print_info();
    cat4.print_info();

    cat1.set_name("Gege");
    cat1.set_age(6);
    cat1.set_weight(12.5);
    cat1.set_color("white/orange");
    cat1.set_owner("No one");
    cat1.set_tag(false);
    cat1.print_info();

    string cat2_name = cat2.get_name();
    int cat2_age = cat2.get_age();
    double cat2_weight = cat2.get_weight();
    string cat2_color = cat2.get_color();
    string cat2_owner = cat2.get_owner();
    bool cat2_tagged = cat2.get_tag();

    std::cout << "The second cat is named \"" << cat2_name << "\", owner is "
              << cat2_owner << ", " << cat2_age << " years old, "
              << cat2_weight << " lbs, " << cat2_color << " color, "
              << (cat2_tagged ? "with tagged." : "without tagged.")
              << '\n';

    return 0;
}