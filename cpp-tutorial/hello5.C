#include <iostream>
using namespace std;

int main() {
  enum Day {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
  Day day = Sat;
  enum {Yes, No} vote = Yes;
  enum Colour {R=0x1, G=0x2, B=0x4} colour;
  colour = B;
  cout << "day:" << day << " vote:" << vote << " colour:" << colour << endl;
}
