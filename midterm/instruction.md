# CIS-22B Spring 2024, Midterm.
- Time limit: 2 hours without penalty. 3:30 pm - 5:30 pm.
- Send only .h and .cpp files and a screenshot of each output.
- If you send links to your online solutions, make sure to send the files as well. 
- Do NOT send PDF or Word.
For all questions, do not use old files I sent before.
Use only the provided updated files as a reference.
Do not reduce or change the format of the main in both questions.
## Q1: 15 points
=============
Using only the given person.h, person.cpp, student.h, student.cpp,
main.cpp files, inherit a class from Student called Grad.
grad.h, grad.cpp, main.cpp
Modify main.cpp to use grad instead of student.
Write functions similar to all the functions written
in student.h and student.cpp
Inside the class Grad
{
//.......
private:
string thesis; //"AI", "Image Processing", etc
};
Submit:
grad.h, grad.cpp, main.cpp, screenshot of the output.
## Q2: 15 points
============
In the shape example I did in class, please make the following changes:
Inside the Shape abstract base class:
add double perimeter under protected;
add computePerimeter function under public; pure virtual.
add printPerimeter function under public; not virtual.
Inside each subclass:
add the definition of computePerimeter;
add the definition of printPerimeter;
Replace the class Triangle with base and height
with class EquilateralTriangle that has equal sides: side
class Square : public Shape
area = side _ side;
perimeter = 4 _ side
class Rectangle : public Shape
arewa = width _ height;
perimeter = 2 _ (width + height);
class Circle : public Shape
area = M_PI _ radius _ radius;
perimeter = 2 _ M_PI _ radius;
class EquilateralTriangle : public Shape
area = (sqrt(3)/4) _ side _ side;
perimeter = side \* 3;
Modify shape_main.cpp to print the area and perimeter.
Submit:
shape.h, shape_main.cpp, screenshot of the output
