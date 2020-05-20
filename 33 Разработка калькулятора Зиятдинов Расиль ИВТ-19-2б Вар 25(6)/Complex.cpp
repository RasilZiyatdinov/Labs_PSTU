#include <cmath>
#include <string>
#include <complex>
#include <msclr/marshal_cppstd.h>
#include "Complex.h"
using namespace std;

complex<double> Di (0.0, 0.0);
complex<double> X_C1(0.0, 0.0);
complex<double> X_C2(0.0, 0.0);
string sample = "1234567890-+.i()";
string ErrorTxt;
bool Success(System::String^ s)
{
	std::string equation = msclr::interop::marshal_as<std::string>(s);
	int iCounter = 0;
	int signCounter = 1;

	for (size_t i = 0; i < equation.length(); i++)
	{
		char a = equation[i];
		bool yes = false;
		for (size_t j = 0; j < sample.length(); j++)
			if (a == sample[j])
				yes = true;
		if (!yes)
		{
			ErrorTxt = "Prohibited symbol";
			return false;
		}
		if (equation[i] == '.')
		{
			if (i == 0)
			{
				ErrorTxt = "Before '.' no number";
				return false;
			}
			else if (!(equation[i - 1] >= '0' && equation[i - 1] <= '9'))
			{
				ErrorTxt = "Before '.' no number";
				return false;
			}
		}
		if (equation[i] == 'i')
			iCounter++;
		if (i != 0 && (equation[i] == '+' || equation[i] == '-'))
			signCounter++;
		if (i != equation.length() - 1)
		{
			if (equation[i] == 'i' && (equation[i + 1] != '+' && equation[i + 1] != '-'))
			{
				ErrorTxt = "Number after 'i'";
				return false;
			}
		}

	}
	if (iCounter > 1)
	{
		ErrorTxt = "Check the imaginary numbers";

		return false;
	}
	if (signCounter > 2)
	{
		ErrorTxt = "Only 2 numbers";
		return false;
	}
	if (signCounter == 2 && iCounter < 1)
	{
		ErrorTxt = "No imaginary part";
		return false;
	}
	return true;
}
complex<double> converting(System::String^ str)
{
	string real = "";
	string imag = "";
	double Real;
	double Imag;
	string A = msclr::interop::marshal_as<std::string>(str);
	int i = 0;
	bool f1 = false, f2 = false;
	while (i != A.length() && !f1 && !f2)
	{
		imag += A[i];
		i++;
		if (A[i] == 'i')
			f1 = true;
		if ((A[i] == '+' || A[i] == '-') && i != 0)
			f2 = true;
	}
	if (f1)
	{
		for (int j = i + 1; j < A.length(); j++)
			real += A[j];
	}
	else 
	{
		for (int i = 0; i < imag.length(); i++)
			real += imag[i];
		imag.clear();
		if (A[i] == '+' || A[i] == '-')
		{
			while (A[i] != 'i')
			{
				imag += A[i];
				i++;
			}
			
		}
	}
	if (!real.empty() && !imag.empty())
	{
		Real = stod(real);
		Imag = stod(imag);
	}
	else if (real.empty())
	{
		Real = 0;
		Imag = stod(imag);
		
	}
	else if (imag.empty())
	{
		Real = stod(real);
		Imag = 0;
	}
	complex<double> z(Real, Imag);
	return z;
}
void complex_solution(complex<double> A, complex<double> B, complex<double> C)
{
	complex<double> four(4, 0);
	complex<double> two(2, 0);
	Di = B * B -  four * A * C;
	X_C1 = (-B + sqrt(Di)) / (two * A);
	X_C2 = (-B - sqrt(Di)) / (two * A);
}