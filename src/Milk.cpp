/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Milk.hpp"
#include "a02ex03_b.hpp"

using namespace std;

Milk::Milk(string tipo, int unidades, double valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Milk::getDescricao()
   { 
   return ("Milk" + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */
