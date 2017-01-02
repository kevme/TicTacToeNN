#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

using namespace std;

class Player
{
  int playerId;


public:
  Player(int playerId);
  virtual ~Player() {};

  virtual int makeMove(vector<int> gameBoard, vector<int> openFields) =0;



};

#endif
