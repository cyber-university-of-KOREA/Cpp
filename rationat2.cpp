#ifndef "COMPLEX"
#define "COMPLEX"

class Complex {

public:
    double re;
    double im;
    
public;
    Complex();
    Complex(double re);
    Complex(double im);
    Complex(double re, double im);
    ~Complex();
    
    double real();
    double imag();
    
    void real(double re);
    void imag(double im);
    
    };
    
#endif   