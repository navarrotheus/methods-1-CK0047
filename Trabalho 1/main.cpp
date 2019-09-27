#include "metodoNewtonPolinomial.hpp"
#include "polinomio.hpp"

//Formar o polinomio e sua derivada
vector<double> formPolynomial();
//Metodo de Newton para polimonios
void methodNewtonPolynomial(vector<double> polynomial, double chute, double erro, double maxIteration);
int main(){
  //Entrada: POLINOMIO, CHUTE, ERRO, MAXIMO DE INTERACOES
  methodNewtonPolynomial(formPolynomial(), 100, 0.00001, 1000000000000);
  return 0;
}