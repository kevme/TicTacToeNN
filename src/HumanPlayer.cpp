/*
 * HumanPlayer.cpp
 *
 *  Created on: 30 Dec 2016
 *      Author: kevinmettenberger
 */

#include "Player.h"
#include "HumanPlayer.h"


#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

HumanPlayer::HumanPlayer(int playerId) : Player(playerId)
{

}

int HumanPlayer::makeMove(vector<int> gameBoard, vector<int> openFields) {

	this->printBoard(gameBoard);

	cout << "Choose field by typing in number of field:" << endl;

	int chosenNumber;

	cin >> chosenNumber;

	return chosenNumber;
}

void HumanPlayer::printBoard(vector<int> gameBoard) {

	cout << "Gameboard:" << endl;

	int boardSize = sqrt(gameBoard.size());

	for (int i = 0; i < boardSize; i++) {
			for (int j = 1; j <= boardSize; j++) {
				int numberToPrint = (i*boardSize)+j;

				//Print delimiter
				if (j != 1) {
					cout << "|";
				}

				//Print X if player 1 chose this field
				if (gameBoard[numberToPrint-1] == -1) {
					cout << "X";
				}

				//Print O if player 2 chose this field
				else if(gameBoard[numberToPrint-1] == 1) {
					cout << "O";
				}

				//Print number of field if empty
				else {
					cout << numberToPrint;
				}
			}
			cout << endl;
		}

}
