
class Salle:public Ressource
{
   Salle(int num,char c);
   void affiche(std::ostream&os);

   private:
   int d_num;
   char d_nomBatiment;

}
