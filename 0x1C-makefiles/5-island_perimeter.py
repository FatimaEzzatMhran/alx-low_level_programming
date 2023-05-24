#!/usr/bin/python3
"""
Returns the perimeter of the island described in grid.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is 1 or 0 island.
    The island doesn’t have “lakes”
    """

    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -=2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -=2

    return perimeter
