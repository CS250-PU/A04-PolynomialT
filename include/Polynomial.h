//******************************************************************************
// File name:  Polynomial.h
// Author:     CS, Pacific University
// Date:       
// Class:      CS250
// Assignment: Polynomial
// Purpose:    Interface for class Polynomial. A Polynomial is a collection of
//             terms where a Term cannot have a negative exponent.
//******************************************************************************

#pragma once

#include <iostream>
#include <vector>
#include "Term.h"

class Polynomial {
public:
  Polynomial ();
  Polynomial (const Polynomial& rcPoly);

  unsigned int degree () const;
  unsigned int size () const;
  double evaluate (double variable) const;

  Polynomial operator+ (const Term& rcTerm) const;
  bool operator== (const Polynomial& rcPoly) const;

  friend std::istream& operator>> (std::istream& rcInStream, 
    Polynomial& rcPoly);
  friend std::ostream& operator<< (std::ostream& rcOutStream, 
    const Polynomial& rcPoly);

private:
  std::vector<Term> mcTerms;
};