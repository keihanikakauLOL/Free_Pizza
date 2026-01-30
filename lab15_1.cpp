#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;

	int *px = &a;
	char *py = &b;
	int **pz = &px;

	cout << a << " " << b << " " << c << " " << px << " " << (int *) &py << " " << pz << endl;
	cout << &a << " " << (int *) &b << " " << (int *) &c << " " << &px << " " << &py << " " << &pz << endl;
	
	c = 'F';
	cout << a << " " << b << " " << c << " " << px << " " << (int *) &py << " " << pz << endl;

	*py = 'W';
	cout << a << " " << b << " " << c << " " << px << " " << (int *) &py << " " << pz << endl;

	*px = 6;
	cout << a << " " << b << " " << c << " " << px << " " << (int *) &py << " " << pz << endl;

	**pz = 7;
	cout << a << " " << b << " " << c << " " << px << " " << (int *) &py << " " << pz << endl;
	
	return 0;
}
