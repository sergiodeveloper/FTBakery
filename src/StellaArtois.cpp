/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "StellaArtois.hpp"

using namespace std;

StellaArtois::StellaArtois(string tipo, int unidades, double valor) : Beer(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string StellaArtois::getDescricao()
   { 
   return ("Stella Artois" + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */