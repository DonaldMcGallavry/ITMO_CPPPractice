#include <iostream>
#include <math.h>
#include <vector>
using namespace std;


bool isSimple(int x) {
	if (x <= 1)
		return false;
	for (int i = 2; i <= sqrt(x); ++i) {
		if (x % i == 0) 
			return false;
	}
	return true;
}

vector<int> masSimple(int x) {
	vector<int> simple;
	for (int i = 2; i <= x; ++i) {
		if (isSimple(i))
			simple.push_back(i);
	}
	return simple;
}

bool isSuperSimple(int x) {
	
	vector<int> simple = masSimple(x);

	if (!isSimple(x))
		return false;
		
	int p = 0;
	for (int i = 0; i < simple.size(); ++i) {
		if (simple[i] == x) {
			p = i + 1; 
			break;
		}
	}
	return isSimple(p);
}

int main()
{
	int x; cout << "Enter the number ";
	cin >> x;
	if (isSuperSimple(x))
		cout << "The number is SuperSimple";
	else
		cout << "The number is  not SuperSimple";
}
