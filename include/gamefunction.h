#ifndef GAMEFUNCTION_H
#define GAMEFUNCTION_H

using namespace std;

/* General handling routines */
void DebugModeInitialise();
void DebugModeTerminate();
void Print(string OutputString);

/* Game functions */
int DiceRoll(int rolls = 1, int sides = 6);
int DistanceToTarget(double oX0, double oY0, double tX1, double tY1);
string InsultGenerator();
int Rating(int totalRating, int playerWins, int playerLosses, int playerGames);

/* Specific Fucntions for RPG */
string FoodChoice();
string Gems();
string Precious();
string DesignChoice();
string JewlleryChoice();
string InterestingItem();
string MadeOf();
string ValuableItem();
string UnwantedItem();
string PickPocket();
string WHFRPLootCrateList();
vector <vector <bool> > MazeGen(int mX = 80, int mY = 40);
string SciFiShoutOut();

#endif