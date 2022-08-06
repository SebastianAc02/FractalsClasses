/*
 * Comple.hpp
 *
 *  Created on: Jun. 30, 2022
 *      Author: sebastianacosta
 */

#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <iostream>
#include <math.h>

class Complex{
	
private:
	
	double imag;
	double real;
	
public:
	
	~Complex();
	
	Complex();
	
	Complex(const Complex&);
	
	Complex(double, double);
	
	double& operator [] (const char*);
	
	
	friend const Complex operator* (const Complex& , const Complex&);
	
	friend const Complex operator+ (const Complex& , const Complex&);
	
	friend double getMagnitudeSquared(const Complex&);
	
	double getReal(){
		return this-> real;
	}

	double getImag(){
		return this -> imag;
	}
	
	
	
	
	
	
};


#endif /* COMPLEX_HPP_ */
