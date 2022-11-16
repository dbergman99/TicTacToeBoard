/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, firstToggle){
  TicTacToeBoard T;
  ASSERT_EQ(T.toggleTurn(), 'O');
}

TEST(TicTacToeBoardTest, twoToggle){
  TicTacToeBoard T;
  T.toggleTurn();
  ASSERT_EQ(T.toggleTurn(), 'X');
}

TEST(TicTacToeBoardTest, placeXatR0C2){
  TicTacToeBoard T;
  T.placePiece(0, 2);
  ASSERT_EQ(T.getPiece(0,2), 'X');
}

TEST(TicTacToeBoardTest, rowOutOfRange){
  TicTacToeBoard T;
  ASSERT_EQ(T.getPiece(3, 0), Invalid);
}
