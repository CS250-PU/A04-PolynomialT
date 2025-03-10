//******************************************************************************
// File name:  Term.h
// Author:     CS, Pacific University
// Date:       
// Class:      CS250
// Assignment: Polynomial
// Purpose:    Interface for class Term. A Term is a single term in a polynomial
//             expression or an equation. It is composed of a coefficient, an
//             exponent, and a variable.
//******************************************************************************
#pragma once

#include <iostream>

class Term {
public:
  Term ();
	Term (double coefficient, int exponent, char variable);
	Term (const Term &rcTerm);

	int degree () const;
	double coefficient () const;
	char variable () const;
	double evaluate (double variableValue) const;
	bool operator== (const Term &rcTerm) const;
	Term operator+ (const Term &rcTerm) const;

	friend std::istream &operator>> (std::istream &rcInStream, Term &rcTerm);
	friend std::ostream &operator<< (std::ostream &rcOutStream, 
		const Term &rcTerm);

private:
	double mCoefficient;
	int mExponent;
	char mVariable;

	void setCoefficient (double coefficient);
	void setExponent (int exponent);
	void setVariable (char variable);
};