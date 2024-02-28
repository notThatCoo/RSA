#include <string>

using namespace std;

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

enum Race{HUMAN, ELF, DRAGANOID, DWARF};


class Character {
 protected:
	Race HeroRace;
	string HeroClass;
    string name;
	double health;
   double speed;
	double dexterity;
   double strength;
   double wisdom;
   double intelligence;
   bool status;

 public:
 	Character(Race, const string &, double, double, double, double, double, double);
 	void setStats(string c);
   Race getReace();
   string getStats();
 	void damage(double d);
   void attack(Character& );
 	bool isAlive();
 
 };

#endif