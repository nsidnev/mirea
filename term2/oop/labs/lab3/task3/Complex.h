#pragma once

#include <cmath>
#include <exception>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

namespace labs_space {
class Complex {
private:
    double re, im;

public:
    Complex();
    Complex(double r);
    Complex(double r, double i);
    Complex(const Complex &c);
    Complex(Complex &&c);
    ~Complex();
    Complex &real(double re);
    const double &real() const;
    Complex &imag(double re);
    const double &imag() const;
    Complex &operator=(const Complex &c);
    Complex &operator=(Complex &&c);
    Complex &operator+=(Complex &c);
    Complex &operator*=(Complex &c);
    Complex &operator-=(Complex &c);
    Complex &operator/=(Complex &c);
};

double abs(const Complex &c);

Complex operator+(const Complex &a, const Complex &b);
Complex operator-(const Complex &a, const Complex &b);
Complex operator*(const Complex &a, const Complex &b);
Complex operator/(const Complex &a, const Complex &b);

bool operator==(const Complex &a, const Complex &b);
bool operator!=(const Complex &a, const Complex &b);
bool operator<(const Complex &a, const Complex &b);
bool operator<=(const Complex &a, const Complex &b);
bool operator>(const Complex &a, const Complex &b);
bool operator<=(const Complex &a, const Complex &b);

ostream &operator<<(ostream &out, const Complex &c);
istream &operator>>(istream &in, Complex &c);
} // namespace labs_space
