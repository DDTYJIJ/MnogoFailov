#include "Factor.hpp"

double Plus(double a, double b) { return a + b; }
double Munis(double a, double b) { return a - b; }
double Mulitu(double a, double b) { return a * b; }

bool Dilen(double a, double b, double& result) {
    if (b == 0) return false;
    else {
        result = a / b;
        return true;
    }
}