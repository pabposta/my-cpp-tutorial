#include <iostream>
#include <string>

using namespace std;

int main() {
	string s = "Hello World";
	
	cout << s << endl;
	cout << "Length of string: " << s.length() << endl;
	
	cout << "Hello World = " << s << " ? " << s.compare("Hello World") << endl;
	cout << "A = " << s << " ? " << s.compare("A") << endl;
	cout << "Z = " << s << " ? " << s.compare("Z") << endl;
	cout << "Hello " << s.substr(6, 5) << endl;
	
	string s2 = s + "!";
	cout << s2 << endl;
	
	cout << s[0] << s[1] << s[2] << s[3] << s[4] << endl;
	
	s.insert(5, ",");
	cout << s << endl;
	
	string s3(s);
	cout << s3 << endl;
	
	cout << (signed int) s.find("X") << endl;
	
	s.clear();
	cout << "Cleared string: " << s << endl;
}
