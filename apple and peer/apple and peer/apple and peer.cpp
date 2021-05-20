#include <iostream>
#include<string>
using namespace std;
class pear;
class apple {
	friend bool colors(apple a, pear p);
private: string color;
public:
	apple() {
	}
	apple(string color) {
		this->color = color;
	}
};
class pear {
	friend bool colors(apple a, pear b);
private: string color;
public:
	pear() {
	}
	pear(string color) {
		this->color = color;
	}
};
bool colors(apple a, pear p) {
	return  a.color == p.color;
}
int main()
{
	apple c("lurji");
	pear b("mwvane");
	if (colors(c, b)) {
		cout << "same" << endl;
	}
	else cout << "different" << endl;
}