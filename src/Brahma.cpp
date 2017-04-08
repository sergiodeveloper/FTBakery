/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Brahma.hpp"

using namespace std;

Brahma::Brahma(string tipo, int unidades, double valor) : Beer(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Brahma::getDescricao()
   { 
   return ("Brahma" + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */
