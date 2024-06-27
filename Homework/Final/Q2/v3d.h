#pragma once
#include <iostream>
using namespace std;

template <typename T>
class V3d
{
public:
    // Defaulting

    V3d(T x_i = 0, T y_i = 0, T z_i = 0);

    V3d(const V3d<T>& obj);
    virtual ~V3d();

    void set(T x_i = 0, T y_i = 0, T z_i = 0);
    void setx(T x_i = 0);
    void sety(T y_i = 0);
    void setz(T z_i = 0);

    T length() const;

    V3d<T>& operator = (const V3d<T>& obj);    // *this = obj
    V3d<T> operator - () const;                // -(*this)

    V3d<T> operator + (const V3d<T>& obj) const;   // *this + obj
    V3d<T> operator - (const V3d<T>& obj) const;   // *this - obj

    V3d<T>& operator += (const V3d<T>& obj);      // *this += obj
    V3d<T>& operator -= (const V3d<T>& obj);      // *this -= obj

    V3d<T>& operator -- ();                       // prefix  --(*this)
    V3d<T> operator -- (int);                     // postfix (*this)--
    V3d<T>& operator ++ ();                       // prefix  ++(*this)
    V3d<T> operator ++ (int);                     // postfix (*this)++

    template <typename U>
    friend std::ostream& operator << (std::ostream& OS, const V3d<U>& obj);

private:
    T x = 0;
    T y = 0;
    T z = 0;
};