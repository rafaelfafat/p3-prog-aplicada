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
    int somaReal = real1 + real2;
    int somaImg = img1 + img2;

    if (somaImg > 0){cout << "\t\t    Soma = " << somaReal << "+" << somaImg << "i" << endl;}
    else{cout << "\t\t    Soma = " << somaReal << somaImg << "i" << endl;}
  }

  void Sub(int img1, int img2, int real1, int real2){
    int subReal = real1 - real2;
    int subImg = img1 - img2;

    if (subImg > 0){cout << "\t   Subtracao = " << subReal << "+" << subImg << "i" << endl;}
    else{cout << "\t   Subtracao = " << subReal << subImg << "i" << endl;}
  }

  void Mult(int img1, int img2, int real1, int real2){
    //(a+bi)(c+di) ->> ac + adi + cbi + bidi onde (i^2 = -1)
    int multReal = (real1 * real2) + (img1 * img2 * (-1));
    int multImg = (real1 * img2) + (img1 * real2);

    if (multImg > 0){cout << "   Multiplicacao = " << multReal << "+" << multImg << "i" << endl;}
    else{cout << "   Multiplicacao = " << multReal << multImg << "i" << endl;}
  }

}tComplexos;