#include <iostream>

using namespace std;

int main() {
	
	/* This is a
	   multiline comment */
	/* This too */
	
	// integers
	int i1;
	i1 = 2;
	int i2 = 1;
	int i3 = i1 + i2;
	cout << "Integers: " << i1 << " + " << i2 << " = " << i3 << endl;
	
	// floats
	float f1, f2;
	f1 = 3.0f;
	f2 = 1.0f;
	float f3 = f1 - f2;
	cout << "Floats: " << f1 << " - " << f2 << " = " << f3 << endl;
	
	// doubles
	double d1 = 2.0d;
	double d2 = 1.0d;
	double d3 = d1 * d2;
	cout << "Doubles: " << d1 << " * " << d2 << " = " << d3 << endl;
	
	// chars
	char c1 = 'D';
	char c2 = 'A';
	char c3 = c1 - c2;
	cout << "Chars: " << c1 << " - " << c2 << " = " << c3 << endl;
	
	// long
	long l1 = -100000000;
	long l2 = -50000000;
	long l3 = l1 / l2;
	cout << "Longs: " << l1 << " / " << l2 << " = " << l3 << endl;
	
	// unsigned
	unsigned int u1 = 1;
	unsigned int u2 = 10;
	unsigned int u3 = u1 - u2;
	cout << "Unsigneds: " << u1 << " - " << u2 << " = " << u3 << endl;
	
	// bool
	bool b1 = u1 < u2;
	bool b2 = u1 > u2; 
	bool b3 = true;
	bool b4 = false;
	bool b5 = -31;
	cout << "Booleans: " << u1 << " < " << u2 << " = " << b1 << endl;
	cout << "Booleans: " << u1 << " > " << u2 << " = " << b2 << endl;
	cout << "Booleans: true = " << b3 << endl;
	cout << "Booleans: false = " << b4 << endl;
	cout << "Booleans: -31 = " << b5 << endl;

	// mixed operations
	int m1 = f1 / i1;
	float m2 = f1 / i1;
	cout << "Mixed int: " << f1 << " / " << i1 << " = " << m1 << endl;
	cout << "Mixed float: " << f1 << " / " << i1 << " = " << m2 << endl;
		
	return 0;
}
