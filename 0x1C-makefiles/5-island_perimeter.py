#!/usr/bin/python3
def island_perimeter(grid):
    """this function returns the perimeter
    of the island described in grid:"""
    perimeter = 0
    glen = len(grid) - 1
    zlen = len(grid[0]) - 1
    for i in range(1, glen):
        for j in range(1, zlen):
            if grid[i][j] == 1:
                if grid[i][j+1] == 0:
                    perimeter += 1
                if grid[i][j-1] == 0:
                    perimeter += 1
                if grid[i+1][j] == 0:
                    perimeter += 1
                if grid[i-1][j] == 0:
                    perimeter += 1
    return perimeter
