#include <iostream>
using namespace std;
int main() {
  int x = 5, y = 7;
  int *p1, *p2;
  p1 = &x;
  p2 = &y;
  *p2 = *p1;
  *p1 = *p2 * 3;
  cout << "p1:" << p1 << " *p1:" << *p1 << endl;
  cout << "p2:" << p2 << " *p2:" << *p2 << endl;

}
