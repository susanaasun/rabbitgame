//
//  History.cpp
//  rabbitgame
//
//  Created by Susana Sun on 1/17/23.
//

#include "History.h"
#include "globals.h"
#include <iostream>
using namespace std;


History::History(int nRows, int nCols)
{
    m_nCols = nCols;
    m_nRows = nRows;
    
    for (int i=0; i < nRows; i++){
        for (int j= 0; j < nCols; j++){
            m_grid[i][j] = '.';
        }
    }
}

bool History::record(int r, int c)
{
    if (r < 0 || c < 0 || r > m_nRows || c > m_nCols)
    {
        return false;
    }
    if (m_grid[r-1][c-1] == '.'){
        m_grid[r-1][c-1] = 'A';
    }
    else if (m_grid[r-1][c-1] == 'Z'){
        m_grid[r-1][c-1] = 'Z';
    }
    else {
        m_grid[r-1][c-1]++;
    }
    return true;
}

void History::display() const
{
    clearScreen();
    for (int r = 1; r <= m_nRows; r++)
    {
        for (int c = 1; c <= m_nCols; c++)
            cout << m_grid[r-1][c-1];
        cout << endl;
    }
    cout << endl;
    
}
