#include <iostream>
using namespace std;
long long UCLN(long long x, long long y);
void tinh();
int main()
{
    int t;
    cin >> t;
    while (t > 0) {
        tinh();
        t = t - 1;
    }
}
void tinh() {
  long long a, b, c, d;
    cin >> a >> b >> c >> d;
	
    if (c * b == d * a) {
        cout << 0 << endl;
    }
    else {
		if (a == 0 && c == 0) {
			cout << 0 << endl;
		}
		else {
			if ((a == 0 && c != 0) || (a != 0 && c == 0)) {
				cout << 1 << endl;
			}
			else {
				if ((c * b) % (d * a) == 0 || (d * a) % (c * b) == 0) {
					cout << 1 << endl;
				}
				else {
					cout << 2 << endl;
				}
	
			}
		}
       
    }
}
long long UCLN(long long x, long long y)
{
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}
 
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}
