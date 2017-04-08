/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#include <string>
#include "Beer.hpp"

using namespace std;

class StellaArtois : public Beer
   {
   private:
      string tipo;
      int unidades;
      
   public:
     StellaArtois(string, int, double);
      virtual string getDescricao();
   };
   
/* fim de arquivo */
