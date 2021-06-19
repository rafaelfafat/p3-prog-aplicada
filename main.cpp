#include <iostream>
#include "complexo.h"

using namespace std;

int main() {
  tComplexos nComplexo;
  int real1, img1, real2, img2;
  
  cout << "Digite a parte real do primeiro numero: "; cin >> real1;
  cout << "Digite a parte imaginaria do primeiro numero: "; cin >> img1;
  cout << "Digite a parte real do segundo numero: "; cin >> real2;
  cout << "Digite a parte imaginaria do segundo numero: "; cin >> img2;

  nComplexo.print(img1, img2, real1, real2);

  nComplexo.Soma(img1, img2, real1, real2);

}