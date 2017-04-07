/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_h.hpp"
#include "a02ex03_i.hpp"

using namespace std;

CheeseCottage::CheeseCottage(string tipo, float peso, double valor) : Cheese(tipo, peso, valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };
   
string CheeseCottage::getDescricao()
   { 
   return ("Cheese Cottage " + tipo + " - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */
