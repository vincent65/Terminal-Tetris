#ifndef _BOARD_
#define _BOARD_

#include "Pieces.h"

#define BOARD_LINE_WIDTH 6
#define BLOCK_SIZE 16
#define BOARD_POSITION 320
#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20
#define MIN_VERTICAL_MARGIN 20
#define MIN_HORIZONTAL_MARGIN 20
#define PIECE_BLOCKS 5

class Board
{
public:
    Board(Pieces *pPieces, int pScreenHeight);

    int GetXPosInPixels(int pPos);
    int GetYPosInPixels(int pPos);
    bool IsFreeBlock(int pX, int pY);
    bool IsPossibleMovement(int pX, int pY, int pPiece, int pRotation);
    void StorePiece(int pX, int pY, int pPiece, int pRotation);
    void DeletePossibleLines();
    bool IsGameOver();

private:
    enum
    {
        POS_FREE,
        POS_FILLED
    };                                     // POS_FREE = free position of the board; POS_FILLED = filled position of the board
    int mBoard[BOARD_WIDTH][BOARD_HEIGHT]; // Board that contains the pieces
    Pieces *mPieces;
    int mScreenHeight;

    void InitBoard();
    void DeleteLine(int pY);

    void Board::InitBoard(){
        for(int i = 0;i < BOARD_WIDTH; i ++) {
            for(int j = 0;j < BOARD_HEIGHT; j ++) {
                mBoard[i][j] = POS_FREE;
            }
        }
    }
    void Board::StorePiece(int pX, int pY, int pPiece, int pRotation) {
        for(int i = pX, i2 = 0; i < pX + PIECE_BLOCKS; i ++, i2 ++) {
            for(int j = pY, j2 = 0; j < pY + PIECE_BLOCKS; j ++, j2 ++) {
                if(mPieces->GetBlockType(pPiece, pRotation, i2, j2) != 0) {
                    mBoard[i][j] = POS_FILLED;
                }
            }
        }
    }
    bool Board::IsGameOver()
    {
        // If the first line has blocks, then, game over
        for (int i = 0; i < BOARD_WIDTH; i++)
        {
            if (mBoard[i][0] == POS_FILLED)
                return true;
        }

        return false;
    }
    void Board::DeleteLine(int pY) {
        for(int j = pY; j > 0; j -- ) {
            for(int i = 0;i < BOARD_WIDTH; i ++) {
                mBoard[i][j] = mBoard[i][j - 1];
            }
        }
    }
    void Board::DeletePossibleLines()
    {
        for (int j = 0; j < BOARD_HEIGHT; j++)
        {
            int i = 0;
            while (i < BOARD_WIDTH)
            {
                if (mBoard[i][j] != POS_FILLED)
                    break;
                i++;
            }

            if (i == BOARD_WIDTH)
                DeleteLine(j);
        }
    }
    bool Board::IsFreeBlock(int pX, int pY)
    {
        if (mBoard[pX][pY] == POS_FREE)
            return true;
        else
            return false;
    }
    int Board::GetXPosInPixels(int pPos)
    {
        return ((BOARD_POSITION - (BLOCK_SIZE * (BOARD_WIDTH / 2))) + (pPos * BLOCK_SIZE));
    }
    int Board::GetYPosInPixels(int pPos)
    {
        return ((mScreenHeight - (BLOCK_SIZE * BOARD_HEIGHT)) + (pPos * BLOCK_SIZE));
    }
};
#endif // _BOARD_
