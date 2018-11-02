#include <iostream>
#include<cstdlib>
using namespace std;

class Farm
{
private:
  string location;
  double number_of_animals;
  double power_of_fans;
protected:
  int square;
  int price;
public:
  string name;
  int number_of_workers;

  void setPublic(string nm, int nowr )
  {
    name = nm ;
    number_of_workers = nowr;
  }
  void set (string lct, double noan, double pofans)
  {
    location = lct;
    number_of_animals = noan;
    power_of_fans = pofans;
  }
  void setProtected(int sq, int pr  )
  {
  square = sq;
  price = pr;
  }


  void get()
  {
    cout << "location is - " << location << endl << "number of animals is - " << number_of_animals << endl<< "power of fans is - " << power_of_fans << endl;

  }
  void getPublic()
  {
    cout<<"Name is - "<< name <<endl<<"Numbe of workers is  - "<<number_of_workers<<endl;
  }
   void getPrivate()
   {
     cout<< "Square is- "<<square<<endl<<"Price is - "<< price<<endl;
   }
    Farm ()
  {
    location = "Ukraine";
    number_of_animals = 222;
   power_of_fans = 233;

  }
  ~Farm(){ };

};
