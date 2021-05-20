#include <iostream>
#include<string>
using namespace std;
class tree;
class building {
	friend bool heights(building a, tree p);
private: int height;
public:
	building() {
	}
	building(int height) {
		this->height=height;
	}
};
class tree {
	friend bool heights(building a, tree b);
private: int height;
public:
	tree() {
	}
	tree(int height) {
		this->height = height;
	}
};
bool heights(building a, tree p) {
	return  a.height == p.height;
}
int main()
{
	building c(22);
	tree b(22);
	if (heights(c, b)) {
		cout << "same" << endl;
	}
	else cout << "different" << endl;
}