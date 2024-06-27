#include <iostream>
#include <cmath>
#include "V3d.h"

using namespace std;

#include "V3d.h"

template <typename T>
V3d<T>::V3d(T x_i, T y_i, T z_i) : x(x_i), y(y_i), z(z_i) {}

template <typename T>
V3d<T>::V3d(const V3d<T>& obj) : x(obj.x), y(obj.y), z(obj.z) {}

template <typename T>
V3d<T>::~V3d() {}

template <typename T>
void V3d<T>::set(T x_i, T y_i, T z_i) {
    x = x_i;
    y = y_i;
    z = z_i;
}

template <typename T>
void V3d<T>::setx(T x_i) {
    x = x_i;
}

template <typename T>
void V3d<T>::sety(T y_i) {
    y = y_i;
}

template <typename T>
void V3d<T>::setz(T z_i) {
    z = z_i;
}

template <typename T>
T V3d<T>::length() const {
    return std::sqrt(x * x + y * y + z * z);
}

template <typename T>
V3d<T>& V3d<T>::operator = (const V3d<T>& obj) {
    if (this != &obj) {
        x = obj.x;
        y = obj.y;
        z = obj.z;
    }
    return *this;
}

template <typename T>
V3d<T> V3d<T>::operator - () const {
    return V3d<T>(-x, -y, -z);
}

template <typename T>
V3d<T> V3d<T>::operator + (const V3d<T>& obj) const {
    return V3d<T>(x + obj.x, y + obj.y, z + obj.z);
}

template <typename T>
V3d<T> V3d<T>::operator - (const V3d<T>& obj) const {
    return V3d<T>(x - obj.x, y - obj.y, z - obj.z);
}

template <typename T>
V3d<T>& V3d<T>::operator += (const V3d<T>& obj) {
    x += obj.x;
    y += obj.y;
    z += obj.z;
    return *this;
}

template <typename T>
V3d<T>& V3d<T>::operator -= (const V3d<T>& obj) {
    x -= obj.x;
    y -= obj.y;
    z -= obj.z;
    return *this;
}

template <typename T>
V3d<T>& V3d<T>::operator -- () {
    --x;
    --y;
    --z;
    return *this;
}

template <typename T>
V3d<T> V3d<T>::operator -- (int) {
    V3d<T> temp = *this;
    --(*this);
    return temp;
}

template <typename T>
V3d<T>& V3d<T>::operator ++ () {
    ++x;
    ++y;
    ++z;
    return *this;
}

template <typename T>
V3d<T> V3d<T>::operator ++ (int) {
    V3d<T> temp = *this;
    ++(*this);
    return temp;
}

template <typename T>
std::ostream& operator << (std::ostream& OS, const V3d<T>& obj) {
    OS << "(" << obj.x << ", " << obj.y << ", " << obj.z << ")";
    return OS;
}


