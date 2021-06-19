#ifndef COMPLEXO_H
#define COMPLEXO_H
#endif
using namespace std;

typedef struct{
  void print(int img1, int img2, int real1, int real2){
    cout << "\n\n----------ENTRADAS----------" << endl;
    if (img1 > 0){cout << " Primeiro Numero = " << real1 << "+" << img1 << "i" << endl;}
    else{cout << " Primeiro Numero = " << real1 << img1 << "i" << endl;}
    if (img2 > 0){cout << "  Segundo Numero = " << real2 << "+" << img2 << "i" << endl;}
    else{cout << "  Segundo Numero = " << real2 << img2 << "i" << endl;}
  }
  void Soma(int img1, int img2, int real1, int real2){
    int somaReal, somaImg;
    somaReal = real1 + real2;
    somaImg = img1 + img2;

    if (somaImg > 0){cout << "\t\t    Soma = " << somaReal << "+" << somaImg << "i" << endl;}
    else{cout << "Soma = " << somaReal << somaImg << "i" << endl;}
  }

  
}tComplexos;