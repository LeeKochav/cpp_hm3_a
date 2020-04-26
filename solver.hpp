#include <iostream>
#include <complex>
using namespace std;

namespace solver
{
class RealVariable
{
private:
    double m_re;

public:
    RealVariable() : m_re(0){};
    RealVariable(double re) : m_re(re){};
    RealVariable &operator*(double times);
    RealVariable &operator*(const RealVariable &x);
    friend RealVariable &operator*(double times, const RealVariable &x);

    RealVariable &operator-(double times);
    RealVariable &operator-(const RealVariable &x);
    friend RealVariable &operator-(double times, const RealVariable &x);

    RealVariable &operator+(double times);
    RealVariable &operator+(const RealVariable &x);
    friend RealVariable &operator+(double times, const RealVariable &x);

    RealVariable &operator/(double times);
    RealVariable &operator/(const RealVariable &x);
    friend RealVariable &operator/(double times, const RealVariable &x);

    RealVariable &operator==(double times);
    RealVariable &operator==(const RealVariable &x);
    friend RealVariable &operator==(double times, const RealVariable &x);

    RealVariable &operator^(int times);
};
class ComplexVariable
{
private:
    double m_re;
    double m_im;

public:
    ComplexVariable() : m_re(0), m_im(0){};
    ComplexVariable(double re, double im) : m_re(re), m_im(im){};
    ComplexVariable &operator*(const ComplexVariable &x);
    ComplexVariable &operator*(double times);
    ComplexVariable &operator*(std::complex<double> x);
    friend ComplexVariable &operator*(double times, const ComplexVariable &x);
    friend ComplexVariable &operator*(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator-(const ComplexVariable &x);
    ComplexVariable &operator-(double times);
    ComplexVariable &operator-(std::complex<double> x);
    friend ComplexVariable &operator-(double times, const ComplexVariable &x);
    friend ComplexVariable &operator-(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator+(const ComplexVariable &x);
    ComplexVariable &operator+(double times);
    ComplexVariable &operator+(std::complex<double> x);
    friend ComplexVariable &operator+(double times, const ComplexVariable &x);
    friend ComplexVariable &operator+(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator/(const ComplexVariable &x);
    ComplexVariable &operator/(double times);
    ComplexVariable &operator/(std::complex<double> x);
    friend ComplexVariable &operator/(double times, const ComplexVariable &x);
    friend ComplexVariable &operator/(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator==(const ComplexVariable &x);
    ComplexVariable &operator==(double times);
    ComplexVariable &operator==(std::complex<double> x);
    friend ComplexVariable &operator==(double times, const ComplexVariable &x);
    friend ComplexVariable &operator==(std::complex<double> y, const ComplexVariable &x);

    ComplexVariable &operator^(int times);
};
double solve(RealVariable &x);
std::complex<double> solve(ComplexVariable &y);
}; // namespace solver