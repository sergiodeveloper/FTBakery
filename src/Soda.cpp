/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "Soda.hpp"

using namespace std;

Soda::Soda(string tipo, int unidades, double valor): Liquid(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Soda::getDescricao()
   { 
   return ("Soda" + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */
