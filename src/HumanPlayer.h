/*
 * HumanPlayer.h
 *
 *  Created on: 30 Dec 2016
 *      Author: kevinmettenberger
 */

#ifndef HUMANPLAYER_H_
#define HUMANPLAYER_H_

#include "Player.h"
#include <vector>

using namespace std;

class HumanPlayer : public Player
{
public:
	HumanPlayer(int playerId);
	int makeMove(vector<int> gameBoard, vector<int> openFields);
private:
	void printBoard(vector<int> gameBoard);


};


#endif
