/*
 * Pixel.hpp
 *
 *  Created on: Jun. 30, 2022
 *      Author: sebastianacosta
 */

#ifndef PIXEL_HPP
#define PIXEL_HPP



#include <iostream>
#include <fstream>

class Pixel {
private:
	unsigned int blue;
	unsigned int green;
	unsigned int red;
public:
	~Pixel();
	const unsigned int& operator[](const char*);
	Pixel();
	Pixel(const Pixel&);
	Pixel(unsigned int, unsigned int, unsigned int);
	friend std::ofstream& operator<<(std::ofstream&, const Pixel&); 
};

#endif