#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char *argv[]) {

  if (argc < 2 ) {
    cout << "There was an error." << endl;
  }

  // Find GCF
  int num = stoi(argv[1]);
  int den = stoi(argv[2]);
  int gcf = gcd(num, den);

  // simplify
  cout << num / gcf << " " << den / gcf << endl;
  return 0;
}
