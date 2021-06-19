#ifndef COMPLEXO_H
#define COMPLEXO_H
#include <math.h>
using namespace std;

struct tComplexos{
  
  void print(int img1, int img2, int real1, int real2){
    cout << "\n\n-------------ENTRADAS-------------" << endl;
    if (img1 >= 0){cout << "\t Complexo Z1 = " << real1 << " + " << img1 << "i" << endl;}
    else{cout << "\t Complexo Z1 = " << real1 << " - " << img1*(-1) << "i" << endl;}
    if (img2 >= 0){cout << "\t Complexo Z2 = " << real2 << " + " << img2 << "i" << endl;}
    else{cout << "\t Complexo Z2 = " << real2 << " - " << img2*(-1) << "i" << endl;}
  }
  void Soma(int img1, int img2, int real1, int real2){
    int somaReal = real1 + real2;
    int somaImg = img1 + img2;

    if (somaImg >= 0){cout << "\t\t    Soma = " << somaReal << " + " << somaImg << "i" << endl;}
    else{cout << "\t\t    Soma = " << somaReal << " - " << somaImg*(-1) << "i" << endl;}
  }

  void Sub(int img1, int img2, int real1, int real2){
    int subReal = real1 - real2;
    int subImg = img1 - img2;

    if (subImg >= 0){cout << "\t   Subtracao = " << subReal << " + " << subImg << "i" << endl;}
    else{cout << "\t   Subtracao = " << subReal << " - " << subImg*(-1) << "i" << endl;}
  }

  void Mult(int img1, int img2, int real1, int real2){
    int multReal = (real1 * real2) + (img1 * img2 * (-1));
    int multImg = (real1 * img2) + (img1 * real2);

    if (multImg >= 0){cout << "   Multiplicacao = " << multReal << " + " << multImg << "i" << endl;}
    else{cout << "   Multiplicacao = " << multReal << " - " << multImg*(-1) << "i" << endl;}
  }

  void Div(int img1, int img2, int real1, int real2){
    float realReverso = real2;
    float imgReverso = img2 * (-1);
    //numerador
    float realNumerador = (real1 * realReverso) + (img1 * imgReverso * (-1));
    float imgNumerador = (real1 * imgReverso) + (img1 * realReverso);
    //denomidador
    float realDenominador = (real2 * realReverso) + (img2 * imgReverso * (-1));

    float divReal = realNumerador / realDenominador;
    float divImg = imgNumerador / realDenominador;

    if (divImg >= 0){cout << "  Divisao em int = (" << realNumerador << "/" << realDenominador << ") + (" 
      << imgNumerador << "/" << realDenominador << ")i" << endl;}
    else{cout << "  Divisao em int = (" << realNumerador << "/" << realDenominador << ") - (" 
      << imgNumerador*(-1) << "/" << realDenominador << ")i" << endl;}

    if (divImg >= 0){cout << "Divisao em float = " << divReal << " + " << divImg << "i" << endl;}
    else{cout << "Divisao em float = " << divReal << " - " << divImg*(-1) << "i" << endl;} 
  }

  void Modulo(int img1, int img2, int real1, int real2){
    float z1 = pow((pow(real1,2)+pow(img1,2)), 0.5);
    float z2 = pow((pow(real2,2)+pow(img2,2)), 0.5);
    cout << "\t\t    |Z1| = " << z1 << endl;
    cout << "\t\t    |Z2| = " << z2 << endl;
  }
};

#endif