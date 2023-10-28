#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>

using namespace std;


	int main()
	{
		float m,n, i;
		

		n = 118554.1101;
		m = n*n;

			for( i = 1; i < 1000000; i++ )
			{
				n =  n + 1;
				m = sqrt(n*n + 8881.111010101);

				cout << "\tm8***___***\t" << setprecision(100) << m << endl;
			}



	}	
