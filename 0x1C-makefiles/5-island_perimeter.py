#!/usr/bin/python3
"""perimeter module"""

def island_perimeter(grid):
    """perimeter module"""
  p = 0
  row = len(grid)
  col = len(grid[0])
  for r in range(row):
    for c in range(col):
      if grid[r][c] == 1:
        if r - 1 < 0 or grid[r - 1][c] == 0:
          p = p + 1
        if r + 1 > row or grid[r + 1][c] == 0:
          p = p + 1
        if c - 1 < 0 or grid[r][c - 1] == 0:
          p = p + 1
        if c + 1 > col or grid[r][c + 1] == 0:
          p = p + 1
  return p
