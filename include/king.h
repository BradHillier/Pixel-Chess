#ifndef KING
#define KING

#include "piece.h"


class King: public Piece 
{
   public:
      King(Chessboard* board, Position position, PieceColour colour);
      ~King();

      /** @brief 
      */
      virtual unordered_set<Position> LegalMoves() override;
};

#endif
