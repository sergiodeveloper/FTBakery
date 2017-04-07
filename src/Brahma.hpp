/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#include <string>
#include "Beer.hpp"

using namespace std;

class Brahma : public Beer
   {
   private:
      string tipo;
      float peso;
      
   public:
     Brahma(string, float, double);
      virtual string getDescricao();
   };
   
/* fim de arquivo */
