#!/usr/bin/python3
"""5-island_perimeter.py"""


def island_perimeter(grid):

    """returns the permiter of an island"""

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
