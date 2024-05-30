#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip> // For std::setprecision and std::fixed

using namespace std;

// M_PI is not in cmath yet
#define M_PI 3.14159265358979323846

// Shape is an ABC class; abstract base class
// has one or more pure virtual functions.
// a pure virtual function has no definition.
// You cannot instantiate objects of it
class Shape
{
public:
	void printArea()
	{
		cout << "area = " << std::fixed << std::setprecision(2) << area << endl;
	}
	void printPerimeter()
	{
		cout << "Perimeter: " << std::fixed << std::setprecision(2) << perimeter << '\n';
	}

	virtual void computeArea() = 0; // pure virtual function; no definition
	virtual void computePerimeter() = 0;
	virtual string toString() const = 0; // pure virtual function; no definition

protected: // to access in subclasses
	double area;
	double perimeter;
};

class Square : public Shape
{
public:
	Square(double side_i = 0) // default to 0
	{
		side = side_i;
	}

	virtual void computeArea()
	{
		area = side * side;
	}

	virtual string toString() const
	{
		return "Square: side = " + std::to_string(side);
	}

	virtual void computePerimeter()
	{
		perimeter = side * 4;
	}

private:
	double side = 0;
};

class Rectangle : public Shape
{
public:
	Rectangle(double width_i = 0, double height_i = 0)
	{
		width = width_i;
		height = height_i;
	}

	virtual void computeArea()
	{
		area = width * height;
	}

	virtual string toString() const
	{
		return "Rectangle: width = " + std::to_string(width) +
			   " height = " + std::to_string(height);
	}

	virtual void computePerimeter()
	{
		perimeter = (height + width) * 2;
	}

private:
	double width = 0, height = 0;
};

class Circle : public Shape
{
public:
	Circle(double radius_i = 0)
	{
		radius = radius_i;
	}

	virtual void computeArea()
	{
		area = M_PI * radius * radius;
	}

	virtual string toString() const
	{
		return "Circle: radius = " + std::to_string(radius);
	}

	virtual void computePerimeter()
	{
		perimeter = radius * M_PI * 2;
	}

private:
	double radius = 0;
};

class EquilateralTriangle : public Shape
{
public:
	EquilateralTriangle(double side_i = 0)
	{
		side = side_i;
	}

	virtual void computeArea()
	{
		area = (sqrt(3) / 4) * side * side;
	}

	virtual string toString() const
	{
		return "Equilateral Triangle: side = " + std::to_string(side);
	}

	virtual void computePerimeter()
	{
		perimeter = side * 3;
	}

private:
	double side = 0;
};