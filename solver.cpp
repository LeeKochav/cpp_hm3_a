#include "solver.hpp"
#include <iostream>
#include <complex>
using namespace std;

using solver::solve, solver::RealVariable, solver::ComplexVariable;

RealVariable &RealVariable::operator*(double times)
{
    return *this;
}

RealVariable &RealVariable::operator*(const RealVariable &x)
{
    return *this;
}
RealVariable &solver::operator*(double times, const RealVariable &x)
{
    RealVariable *ans = new RealVariable();
    return *ans;
}

RealVariable &RealVariable::operator-(double times)
{
    return *this;
}
RealVariable &RealVariable::operator-(const RealVariable &x)
{
    return *this;
}
RealVariable &solver::operator-(double times, const RealVariable &x)
{
    RealVariable *ans = new RealVariable();
    return *ans;
}

RealVariable &RealVariable::operator+(double times)
{
    return *this;
}
RealVariable &RealVariable::operator+(const RealVariable &x)
{
    return *this;
}
RealVariable &solver::operator+(double times, const RealVariable &x)
{

    RealVariable *ans = new RealVariable();
    return *ans;
}

RealVariable &RealVariable::operator/(double times)
{
    return *this;
}
RealVariable &RealVariable::operator/(const RealVariable &x)
{
    return *this;
}
RealVariable &solver::operator/(double times, const RealVariable &x)
{
    RealVariable *ans = new RealVariable();
    return *ans;
}

RealVariable &RealVariable::operator==(double times)
{
    return *this;
}
RealVariable &RealVariable::operator==(const RealVariable &x)
{
    return *this;
}
RealVariable &solver::operator==(double times, const RealVariable &x)
{
    RealVariable *ans = new RealVariable();
    return *ans;
}
RealVariable &RealVariable::operator^(int times)
{
    return *this;
}

ComplexVariable &ComplexVariable::operator*(const ComplexVariable &x)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator*(double times)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator*(std::complex<double> x)
{
    return *this;
}
ComplexVariable &solver::operator*(double times, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}
ComplexVariable &solver::operator*(std::complex<double> y, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}

ComplexVariable &ComplexVariable::operator-(const ComplexVariable &x)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator-(double times)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator-(std::complex<double> x)
{
    return *this;
}
ComplexVariable &solver::operator-(double times, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}
ComplexVariable &solver::operator-(std::complex<double> y, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}

ComplexVariable &ComplexVariable::operator+(const ComplexVariable &x)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator+(double times)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator+(std::complex<double> x)
{
    return *this;
}
ComplexVariable &solver::operator+(double times, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}
ComplexVariable &solver::operator+(std::complex<double> y, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}

ComplexVariable &ComplexVariable::operator/(const ComplexVariable &x)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator/(double times)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator/(std::complex<double> x)
{
    return *this;
}
ComplexVariable &solver::operator/(double times, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}
ComplexVariable &solver::operator/(std::complex<double> y, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}

ComplexVariable &ComplexVariable::operator==(const ComplexVariable &x)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator==(double times)
{
    return *this;
}
ComplexVariable &ComplexVariable::operator==(std::complex<double> x)
{
    return *this;
}
ComplexVariable &solver::operator==(double times, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}
ComplexVariable &solver::operator==(std::complex<double> y, const ComplexVariable &x)
{
    ComplexVariable *ans = new ComplexVariable();
    return *ans;
}

ComplexVariable &ComplexVariable::operator^(int times)
{
    return *this;
}

double solver::solve(RealVariable &x)
{
    double res;
    return res;
}
std::complex<double> solver::solve(ComplexVariable &y)
{
    std::complex<double> res;
    return res;
}