//============================================================================
// Name        : TicTacToeNN.cpp
// Author      : Kevin Mettenberger
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "TicTacToeGame.h"
#include "Player.h"
#include "HumanPlayer.h"

using namespace std;

int main() {

	int boardSize = 3;
	int numberOfFields = boardSize*boardSize;

	HumanPlayer playerOne(-1);
	HumanPlayer playerTwo(1);

	TicTacToeGame game(boardSize, playerOne, playerTwo);
	game.startGame();



	return 0;
}


