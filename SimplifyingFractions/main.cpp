#include <iostream>
#include <fstream>

using namespace std;

int numerator[6];
int denominator[6];
int num_simplified[6];
int den_simplified[6];
int gcf;

int readInput() {
  ifstream File("input.txt");
  int i = 0;

  while (!File.eof()) {
    File >> numerator[i] >> denominator[i];
    i++;
  }

  File.close();
}

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int simplify() {
  for (int i = 0; i < 6; i++) {
    gcf = gcd(numerator[i], denominator[i]);
    num_simplified[i] = numerator[i] / gcf;
    den_simplified[i] = denominator[i] / gcf;
  }
}

int writeOutput() {
  ofstream File("output.txt");
  int i = 0;

  for (int i = 0; i < 6; i++) {
    File << num_simplified[i] << " " << den_simplified[i] << "\n";
  }

  File.close();
}

int main() {
  readInput();
  simplify();
  writeOutput();
  return 0;
}
