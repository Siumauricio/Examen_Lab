#pragma once
#ifndef COMPLEJO_H
#define COMPLEJO_H // !COMPLEJO_H
#include <iostream>


class Complejo {
public:
	Complejo(double = 0, double = 0);
	Complejo operator+(const Complejo&) const;
	Complejo operator-(const Complejo&) const;
	Complejo operator*(const Complejo&)const;
	void imprimir() const;
	bool operator==(const Complejo& other);
	bool operator!=(const Complejo& other);
	friend std::ostream& operator<<(std::ostream&, const Complejo&);
	friend std::istream& operator >> (std::istream&, Complejo&);


private:
	double real;
	double imaginaria;
};
#endif
