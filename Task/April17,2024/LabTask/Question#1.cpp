#include <cmath>
#include <iostream>
using namespace std;
class Point {
  int x, y;

public:
  Point(int a, int b) {
    x = a;
    y = b;
  }
  int calculateDistance(const Point *p) const {
    return sqrt(pow(x - p->x, 2) + pow(y - p->y, 2));
  }
  int getX() { return x; }
  int getY() { return y; }
};
int main() {
  const Point *p = new Point(3, 4);
  const Point *p2 = new Point(5, 9);
  cout << "Point 1: (" << p->getX() << ", " << p->getY() << ")" << endl;
  cout << "Point 1: (" << p->getX() << ", " << p->getY() << ")" << endl;
  int distanace = p->calculateDistance(p2);
  cout << "Distance between p and p2 is: " << distance<<endl;
}
