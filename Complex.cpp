#include <iostream>
using namespace std;


class Complex {
public:
    double real;      
    double imaginary;  

    // const
    Complex(double r = 0, double i = 0) : 
	real(r), imaginary(i) {}

    Complex add(const Complex& c) {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    Complex subtract(const Complex& c) {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    Complex multiply(const Complex& c) {
        return Complex(real * c.real - imaginary * c.imaginary,
                       real * c.imaginary + imaginary * c.real);
    }

    
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    
    Complex num1, num2;

    cout << "Enter real part of first complex number: ";
    cin >> num1.real;
    cout << "Enter imaginary part of first complex number: ";
    cin >> num1.imaginary;

    cout << "Enter real part of second complex number: ";
    cin >> num2.real;
    cout << "Enter imaginary part of second complex number: ";
    cin >> num2.imaginary;

    Complex sum = num1.add(num2);
    Complex difference = num1.subtract(num2);
    Complex product = num1.multiply(num2);

    cout << "\nSum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();
    cout << "Product: ";
    product.display();

    return 0;
}
