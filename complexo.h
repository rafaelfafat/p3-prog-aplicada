#ifndef COMPLEXO_H
#define COMPLEXO_H
#endif

using namespace std;

typedef struct{
  void print(int img1, int img2, int real1, int real2){
    std:: cout << "-----ENTRADAS-----" << endl;
    if (img1 > 0){cout << " n1 = " << real1 << "+" << img1 << "i" << endl;}
    else{cout << " n1 = " << real1 << img1 << "i" << endl;}
    if (img2 > 0){cout << " n2 = " << real2 << "+" << img2 << "i" << endl;}
    else{cout << " n2 = " << real2 << img2 << "i" << endl;}
  }
  int Soma(int x, int y){
    int soma = x + y;
    return soma;
  }


}tComplexos;