/*
 * TicTacToeGame.cpp
 *
 *  Created on: 30 Dec 2016
 *      Author: kevinmettenberger
 */

#include "TicTacToeGame.h"
#include "Player.h"

#include <iostream>
using namespace std;

TicTacToeGame::TicTacToeGame(int boardSize, Player &playerOne, Player &playerTwo)
{
	this->boardSize = boardSize;

	int numberOfFields = boardSize*boardSize;

	this->gameBoard = vector<int>(numberOfFields);
	this->openFields = vector<int>(numberOfFields);

	this->playerOne = &playerOne;
	this->playerTwo = &playerTwo;

}

void TicTacToeGame::startGame()
{

	cout << "Let the game begin..." << endl;
	int moveCounter = 1;
	bool gameEnded = false;

	while(gameEnded == false) {

		if (moveCounter % 2) {
			cout << "Player One" << endl;
			int field = this->playerOne->makeMove(this->gameBoard, this->openFields);
			this->chooseField(-1, field);
		}
		else {
			cout << "Player Two" << endl;
			int field = this->playerTwo->makeMove(this->gameBoard, this->openFields);
			this->chooseField(1, field);
		}

		moveCounter++;
		if (moveCounter == 20) {
			gameEnded = true;
		}
	}


}

void TicTacToeGame::chooseField(int player, int field) {
	this->gameBoard[field-1] = player;
}

void TicTacToeGame::initPlayers() {

}
