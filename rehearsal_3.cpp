#include <iostream>
#include <cmath>

using namespace std;

//Write sumSqrt() here.
double sumSqrt(int N){
	if(N <= 0){
		return 0;
	}

	int i = 0;
	double sum = 0;

	while(i < N){
		sum += (1 / sqrt(i + 1));
		i++;
	}

	return sum;
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(-5);
    double d = sumSqrt(2);
    double e = sumSqrt(3);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
