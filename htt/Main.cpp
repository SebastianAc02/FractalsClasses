

#include <iostream>
#include "Fractal.hpp"
#include "Pixel.hpp"
#include "Complex.hpp"


Fractal testMoveConstructor(unsigned int rows, unsigned int cols, char c){
	return std::move(Fractal(rows, cols, c));
}


int main() {
         Fractal m1(768U, 1024U, 'm'), j1(768U, 1024U, 'j'), m2, j2;
         saveToPPM(m1, "mandelbrot.ppm");
         saveToPPM(j1, "julia.ppm");
         m2 = Fractal(m1);
         j2 = testMoveConstructor(600U, 800U, 'j');
         saveToPPM(j2, "julia_2.ppm");
return 0; }
