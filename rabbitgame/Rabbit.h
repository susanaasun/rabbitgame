//
//  Rabbit.hpp
//  rabbitgame
//
//  Created by Susana Sun on 1/17/23.
//

#ifndef Rabbit_h
#define Rabbit_h

#include <stdio.h>
class Arena;

class Rabbit
{
  public:
      // Constructor
    Rabbit(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    void move();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
    int    m_idleTurnsRemaining;
};

#endif /* Rabbit_hpp */

