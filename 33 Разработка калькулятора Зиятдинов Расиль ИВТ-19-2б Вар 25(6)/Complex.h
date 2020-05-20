#pragma once
#include <complex>
#include <string>
using namespace std;
extern complex<double> X_C1, X_C2, Di;
extern string sample;
extern string ErrorTxt;
bool Success(System::String^);
void complex_solution(complex<double>, complex<double>, complex<double>);
complex<double> converting(System::String^);