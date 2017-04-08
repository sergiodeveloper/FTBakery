/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Budweiser.hpp"

using namespace std;

Budweiser::Budweiser(string tipo, int unidades, double valor) : Beer(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Budweiser::getDescricao()
   { 
   return ("Budweiser" + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */
