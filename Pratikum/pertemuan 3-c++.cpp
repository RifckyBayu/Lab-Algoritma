//unary => satu buah operand, contoh : 5
//binary => dua buah operand, contoh : 5 + 10
// ternary => satu - tiga operand, contoh : (5 + 10) - 5

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	
	cout << "Masukan nilai A : ";
	cin >> a;
	cout << "Masukan nilai 0 : ";
	cin >> b;
	
	c = a % b;
	d = a * b;
	
	cout << "Hasil nilai dari C = A % B = " << c << endl;
	cout << "Hasil nilai dari D = A * B = " << d << endl;
	
	return 0;
	
}
