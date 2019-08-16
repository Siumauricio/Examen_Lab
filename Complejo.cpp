#pragma once
#include "Complejo.h"
#include <iostream>
using namespace std;

Complejo::Complejo(double parteReal, double parteimaginaria):real(parteReal),imaginaria(parteimaginaria) {


}

Complejo Complejo::operator+(const Complejo& operando2)const {

	return Complejo(real + operando2.real, imaginaria + operando2.imaginaria);

}

Complejo Complejo::operator-(const Complejo& operando2) const {

	return Complejo(real - operando2.real, imaginaria - operando2.imaginaria);
}

Complejo Complejo::operator*(const Complejo& operando2)const {

	return Complejo(real * operando2.real, imaginaria* operando2.imaginaria);
}

bool Complejo::operator==(const Complejo& other)
{
	Complejo var;
	if (var.real==other.real&&var.imaginaria==other.imaginaria)
	{
		return true;
	}
	return false;
}
bool Complejo::operator!=(const Complejo& other) {
	Complejo var;
	if (var.real!=other.real&& var.imaginaria==other.imaginaria)
	{
		return true;
	}
	return false;
}

std::ostream& operator<<(std::ostream& out, const Complejo& arr)
{
	out << "("<<arr.real<<")"<<"("<<arr.imaginaria<<")";

	return out;
}

istream& operator >> (istream& in, Complejo& c)
{
	cout << "Ingresa la parte real: ";
	in >> c.real;
	cout << "Ingresa la parte imaginaria: ";
	in >> c.imaginaria;
	return in;
}
