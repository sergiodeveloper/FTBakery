/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Water.hpp"
#include "a02ex03_b.hpp"

using namespace std;

Water::Water(string tipo, int unidades, double valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Water::getDescricao()
   { 
   return ("Water" + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */
