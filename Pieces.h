#ifndef _PIECES_
#define _PIECES_

class Pieces{
    public:
        int GetBlockType(int pPiece, int pRotation, int pX, int pY);
        int GetXInitialPosition(int pPiece, int pRotation);
        int GetYInitialPosition(int pPiece, int pRotation);
        /*
    ======================================
    Return the type of a block (0 = no-block, 1 = normal block, 2 = pivot block)

    Parameters:

    >> pPiece: Piece to draw
    >> pRotation: 1 of the 4 possible rotations
    >> pX: Horizontal position in blocks
    >> pY: Vertical position in blocks
    ======================================
    */

        int Pieces::GetBlockType(int pPiece, int pRotation, int pX, int pY)
        {
            return mPieces[pPiece][pRotation][pX][pY];
        }
        /*
        ======================================
        Returns the horizontal displacement of the piece that has to be applied in order to create it in the
        correct position.

        Parameters:

        >> pPiece: Piece to draw
        >> pRotation: 1 of the 4 possible rotations
        ======================================
        */
        int Pieces::GetXInitialPosition(int pPiece, int pRotation)
        {
            return mPiecesInitialPosition[pPiece][pRotation][0];
        }

        /*
        ======================================
        Returns the vertical displacement of the piece that has to be applied in order to create it in the
        correct position.

        Parameters:

        >> pPiece: Piece to draw
        >> pRotation: 1 of the 4 possible rotations
        ======================================
        */
        int Pieces::GetYInitialPosition(int pPiece, int pRotation)
        {
            return mPiecesInitialPosition[pPiece][pRotation][1];
        }

        int mPiecesInitialPosition[7 /*kind */][4 /* r2otation */][2 /* position */] =
            {
                /* Square */
                {
                    {-2, -3},
                    {-2, -3},
                    {-2, -3},
                    {-2, -3}},
                /* I */
                {
                    {-2, -2},
                    {-2, -3},
                    {-2, -2},
                    {-2, -3}},
                /* L */
                {
                    {-2, -3},
                    {-2, -3},
                    {-2, -3},
                    {-2, -2}},
                /* L mirrored */
                {
                    {-2, -3},
                    {-2, -2},
                    {-2, -3},
                    {-2, -3}},
                /* N */
                {
                    {-2, -3},
                    {-2, -3},
                    {-2, -3},
                    {-2, -2}},
                /* N mirrored */
                {
                    {-2, -3},
                    {-2, -3},
                    {-2, -3},
                    {-2, -2}},
                /* T */
                {
                    {-2, -3},
                    {-2, -3},
                    {-2, -3},
                    {-2, -2}},
        };
        // Pieces definition
        char mPieces[7 /*kind */][4 /* rotation */][5 /* horizontal blocks */][5 /* vertical blocks */] =
            {
                // Square
                {
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 2, 1, 0},
                     {0, 0, 1, 1, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 2, 1, 0},
                     {0, 0, 1, 1, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 2, 1, 0},
                     {0, 0, 1, 1, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 2, 1, 0},
                     {0, 0, 1, 1, 0},
                     {0, 0, 0, 0, 0}}},

                // I
                {
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 1, 2, 1, 1},
                     {0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 2, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 1, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {1, 1, 2, 1, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 1, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 2, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0}}},
                // L
                {
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 2, 0, 0},
                     {0, 0, 1, 1, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 1, 2, 1, 0},
                     {0, 1, 0, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 1, 1, 0, 0},
                     {0, 0, 2, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 1, 0},
                     {0, 1, 2, 1, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0}}},
                // L mirrored
                {
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 2, 0, 0},
                     {0, 1, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 1, 0, 0, 0},
                     {0, 1, 2, 1, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 1, 0},
                     {0, 0, 2, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 1, 2, 1, 0},
                     {0, 0, 0, 1, 0},
                     {0, 0, 0, 0, 0}}},
                // N
                {
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 1, 0},
                     {0, 0, 2, 1, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 1, 2, 0, 0},
                     {0, 0, 1, 1, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 1, 2, 0, 0},
                     {0, 1, 0, 0, 0},
                     {0, 0, 0, 0, 0}},

                    {{0, 0, 0, 0, 0},
                     {0, 1, 1, 0, 0},
                     {0, 0, 2, 1, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0}}},
                // N mirrored
                {
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 2, 1, 0},
                     {0, 0, 0, 1, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 2, 1, 0},
                     {0, 1, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 1, 0, 0, 0},
                     {0, 1, 2, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 1, 0},
                     {0, 1, 2, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0}}},
                // T
                {
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 2, 1, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0},
                     {0, 1, 2, 1, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 1, 2, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 0, 0, 0, 0}},
                    {{0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0},
                     {0, 1, 2, 1, 0},
                     {0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0}}}};
};
#endif // _PIECES_
