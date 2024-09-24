#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double R1, R2, x, y;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R1 = "; cin >> R1;
		cout << "R2 = "; cin >> R2;

		if ((x <= 0 && y >= 0 && x * x + y * y <= R2 * R2) ||
			(x >= 0 && y <= 0 && x * x + y * y <= R1 * R1 && x * x + y * y >= R2 * R2))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - R1;
			y = 6. * rand() / RAND_MAX - R1;
			if ((x <= 0 && y >= 0 && x * x + y * y <= R2 * R2) ||
				(x >= 0 && y <= 0 && x * x + y * y <= R1 * R1 && x * x + y * y >= R2 * R2))
         cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}