#include "player.h"
#include <iostream>
//i love code
using namespace std;

//heyo
/*
 * Constructor for the player; initialize everything here. The side your AI is
 * on (BLACK or WHITE) is passed in as "side". The constructor must finish 
 * within 30 seconds.
 */
Player::Player(Side side) {
    // Will be set to true in test_minimax.cpp.
    testingMinimax = false;

    /* 
     * TODO: Do any initialization you need to do here (setting up the board,
     * precalculating things, etc.) However, remember that you will only have
     * 30 seconds.
     */
     Board *newBoard = new Board();
     Side myside = side;
     Side otherside = /////////////REMEMBER TO INITIALIZE VAR
}

/*
 * Destructor for the player.
 */
Player::~Player() {
}

/*
 * Compute the next move given the opponent's last move. Your AI is
 * expected to keep track of the board on its own. If this is the first move,
 * or if the opponent passed on the last move, then opponentsMove will be NULL.
 *
 * msLeft represents the time your AI has left for the total game, in
 * milliseconds. doMove() must take no longer than msLeft, or your AI will
 * be disqualified! An msLeft value of -1 indicates no time limit.
 *
 * The move returned must be legal; if there are no valid moves for your side,
 * return NULL.
 */
Move *Player::doMove(Move *opponentsMove, int msLeft) {
    /* 
     * TODO: Implement how moves your AI should play here. You should first
     * process the opponent's opponents move before calculating your own move
     */ 
    
    int flipped = 0;
    
     //to flip discs to left
     for (int k = pos; k < otherside; k++)
     {
		 board[row][k] = pos;
		 flipped++;
	 }
     
    // Modifies board: Board::doMove(Move *m, Side side)
    if (Board::hasMoves(side) == true)
    {
		for (int i = 0; i < row.size(); i++)
		{
			for (int j = 0; j < col.size(); j++)
			{
				if (Board::checkMove(*m, side) == true)
				{
					std::vector(moves * ) = ;
					moves.push_back(Move move(i, j)); 
				}
			}
		}
		doMove();
	}
    return NULL;
}
