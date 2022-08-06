#ifndef FRACTAL_HPP_
#define FRACTAL_HPP_
#include "Pixel.hpp"
#include "Complex.hpp"

class Fractal {
private:
	unsigned int cols;
	Pixel** grid;
	unsigned int maxIter;
	unsigned int rows;
	char type;
public:
	~Fractal();
	unsigned int determinePixelColor(Complex, Complex);
	Fractal();
	Fractal(const Fractal&);
	Fractal(Fractal&&);
	Fractal(unsigned int, unsigned int, char);
	void makeJuliaFractal();
	void makeMandelbrotFractal();
	const Fractal& operator=(const Fractal&);
	Fractal& operator=(Fractal&&);

	friend void saveToPPM(const Fractal&, const char*);
};
Pixel convertToPixel(unsigned int);
#endif
