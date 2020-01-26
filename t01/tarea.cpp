#include <iostream>
#include <stdlib.h>
#include <time.h>

/*	FORTY
 *	  TEN
 *	  TEN
 *	-----
 *	SIXTY
 */

int main()
{
    int f, o, r, t, y, e, n, s, i, x;
    int ten, forty, sixty, suma;
    srand(time(NULL));
    do {
	do {
	    f = rand() % 10;
	    o = rand() % 10;
	    r = rand() % 10;
	    t = rand() % 10;
	    y = rand() % 10;
	    e = rand() % 10;
	    n = rand() % 10;
	    s = rand() % 10;
	    i = rand() % 10;
	    x = rand() % 10;

	    ten = (t * 100) + (e * 10) + n;
	    forty = (f * 10000) + (o * 1000) + (r * 100) + (t * 10) + y;
	    sixty = (s * 10000) + (i * 1000) + (x * 100) + (t * 10) + y;

	    suma = f + o + r + t + y + e + n + s + i + x;
	} while (((ten * 2) != (sixty - forty)) && suma != 45);
    } while (f == o && f == r && f == t && f == y && f == e && f == n && f == s && f == i && f == x && o == r && o == t && o == y && o == e && o == n && o == s && o == i && o == x);
    std::cout << "ten = " << ten
	      << "\nforty = " << forty
	      << "\nsixty = " << sixty << std::endl;
}
