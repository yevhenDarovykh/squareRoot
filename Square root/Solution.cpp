#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
		// handling exception when x=0
		if (x==0) {
			return x;
		}

		// number of bits to represent x
		int b = log2(x) + 1;

		// 2^(log2(x)/2) - initial approximation
		double xn = 1;
		for (int i = 0; i < b / 2; i++) {
			xn *= 2;
		}

		// Newton's method implementation
		double prevx = -1;
		while (prevx != xn) {
			prevx = xn;
			xn = 0.5 * (xn + x / xn);
		}

		return static_cast<int>(xn);
    }
};