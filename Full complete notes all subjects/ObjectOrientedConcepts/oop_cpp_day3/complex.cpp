
#include<iostream>
using namespace std;
#include"complex.h"
complex::complex() {
	real = imag = 1;
}
void complex::show() {
	cout<<"="<<real<<"+j"<<imag;
}
