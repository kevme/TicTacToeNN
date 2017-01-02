#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H

#include <vector>

#include "Player.h"

using namespace std;

class TicTacToeGame
{
  int boardSize;
  vector<int> gameBoard;
  vector<int> openFields;
  Player *playerOne;
  Player *playerTwo;

public:
  TicTacToeGame(int boardSize, Player &playerOne, Player &playerTwo);

  void startGame();
  void chooseField(int player, int field);
  
private:
  void initPlayers();

  

};

#endif
