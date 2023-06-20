#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int PI = 3.142;
  cout<< "cos(60) = " << cos ( 60.0 * PI / 180.0 )<<endl;
  cout<< "sin(60) = " << sin ( 60.0 * PI / 180.0 )<<endl;
  cout<< "tan(45) = " << tan ( 45.0 * PI / 180.0 )<<endl;
  cout<< "acos(0.5) = " << acos (0.5) * 180.0 / PI<<endl;
  cout<< "asin(0.5) = " << asin (0.5) * 180.0 / PI<<endl;
  cout<< "atan(1.0) = " << atan (1.0) * 180.0 / PI<<endl;
  cout<< "2^3 = " << pow(2,3)<<endl;
  cout<< "sqrt(49) = " << sqrt(49)<<endl;
  cout<< "ceil(3.8) = " << ceil(3.8)<<endl;
  cout<< "floor(2.3) = " << floor(2.3)<<endl;
  cout<< "fmod(5.3,2) = " << fmod(5.3,2)<<endl;
  cout<< "trunc(5.3,2) = " << trunc(2.3)<<endl;
  cout<< "round(4.6) = " << round(4.6)<<endl;
  cout<< "remainder(18.5,4.2) = " << remainder(18.5 ,4.2)<<endl;
  cout<< "fmax(100.0,1.0) = " << fmax(100.0,1.0)<<endl;
  cout<< "fmin(100.0,1.0) = " << fmin(100.0,1.0)<<endl;
  cout<< "fdim(2.0,1.0) = " << fdim(2.0,1.0)<<endl;
  cout<< "fabs(3.1416) = " << fabs(3.1416)<<endl;
  cout<< "abs(3.1416) = " << abs(3.1416)<<endl;
  cout<< "log(5) = " << log(5)<<endl;
  cout<< "exp(5.0) = " << exp(5.0)<<endl;
  cout<< "log10(2) = " << log10(2)<<endl;
  return 0;
}
/* Table Of C++ Mathematical Functions
Given below is a list of the important mathematical functions in C++ along with their description, prototype, and example.

No	Function	Prototype	Description	Example
Trigonometric Functions				
1	cos	double cos (double x);	Returns cosine of angle x in radians.	cout<< cos ( 60.0 * PI / 180.0 );
(here PI = 3.142)
**returns 0.540302
2	sin	double sin(double x);	Returns sine of angle x in radians.	cout<< sin ( 60.0 * PI / 180.0 );
(here PI = 3.142)
**returns 0.841471
3	tan	double tan (double x);	Returns tangent of angle x in radians.	cout<< tan ( 45.0 * PI / 180.0 );
(here PI = 3.142)
**returns 0.931596
4	acos	double acos (double x);	Returns arc cosine of angle x in radians.
**Arc cosine is the inverse cosine of cos operation.	double param = 0.5;
cout<< acos (param) *
180.0 / PI;
(here PI = 3.142)
**returns 62.8319
5	asin	double asin(double x);	Returns arc sine of angle x in radians.
**Arc sine is the inverse sine of sin operation.	double param = 0.5;
cout<< asin (param) *
180.0 / PI;
(here PI = 3.142)
**return 31.4159
6	atan	double atan (double x);	Returns arc tangent of angle x in radians. **Arc tangent is the inverse tangent of tan operation.	double param = 1.0;
cout<< atan (param) *
180.0 / PI;
(here PI = 3.142)
**returns 47.1239
Power Functions				
7	pow	double pow (double base, double exponent);	Returns the base raised to power exponent.	cout<<”2^3 = “<< pow(2,3);
**returns 8
8	sqrt	double sqrt(double x);	Returns square root of x.	cout<< sqrt(49);
** returns 7
Rounding and Remainder Functions				
9	ceil	double ceil (double x);	Returns smallest integer value that is not less than x;
Rounds x upward.	cout<< ceil(3.8);
**returns 4
10	floor	double floor (double x);	Returns larger integer value that is not greater than x;
Rounds x downward.	cout<< floor(2.3);
**returns 2
11	fmod	double fmod (double numer, double denom);	Returns floating-point remainder of numer/denom.	cout<< fmod(5.3,2);
**returns 1.3
12	trunc	double trunc (double x);
**also provides variations for float and long double	Returns the nearest integral value not larger than x.
Rounds  x  toward zero.	cout<< trunc(2.3);
**returns 2
13	round	double round (double x);
**also provides variations for float and long double	Returns integral value that is nearest to x.	cout<< round(4.6);
**returns 5
14	remainder	double remainder (double numer, double denom);
**also provides variations for float and long double	Returns floating point remainder of numer/denom rounded to nearest value.	cout<< remainder(18.5 ,4.2);
**returns 1.7
Minimum, Maximum, Difference and Absolute Functions				
15	fmax	double fmax (double x, double y).
**also provides variations for float and long double.	Returns larger value of the arguments x and y.
If one number is NaN, other is returned.	cout<< fmax(100.0,1.0);
**returns 100
16	fmin	double fmin (double x, double y);
**also provides variations for float and long double.	Returns smaller value of the arguments x and y.
If one number is NaN, other is returned.	cout<< fmin(100.0,1.0);
**returns 1
17	fdim	double fdim (double x, double y);
**also provides variations for float and long double.	Returns the positive difference between x and y.
If x > y, returns x-y; otherwise returns zero.	cout<< fdim(2.0,1.0);
**returns 1
18	fabs	double fabs(double x);	Returns absolute value of x.	cout<< fabs(3.1416);
**returns 3.1416
19	abs	double abs ( double x);
**also provides variations for float and long double.	Returns absolute value of x.	cout<< abs(3.1416);
**returns 3.1416
Exponential and Logarithmic Functions				
20	exp	double exp (double x);	Returns exponential value of x i.e. e x.	cout<< exp(5.0);
**returns 148.413
21	log	double log (double x);	Returns natural logarithm of x.(to the base e).	cout<< log(5);
**returns 1.60944
22	log10	double log10 (double x);	Returns common logarithm of x (to the base 10).	cout<< log10(5);
**returns 0.69897
*/