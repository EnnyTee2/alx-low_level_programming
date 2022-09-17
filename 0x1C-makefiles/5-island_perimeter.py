#!/usr/bin/python3
"""Defines a function for measuring island perimeter."""


def island_perimeter(grid):
    """Return the perimeter of an island represented in grid
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    perimeter = 0
    glen = len(grid)
    zlen = len(grid[0])

    for i in range(0, glen):
        if i == 0 or i == glen - 1:  # top or bottom border
            for j in range(0, zlen):
                if grid[i][j] == 1:  # land found on border
                    return 0
        else:
            for j in range(0, zlen):
                if j == 0 or j == zlen - 1:  # left or right border
                    if grid[i][j] == 1:  # land found on border
                        return 0
                else:
                    if grid[i][j] == 1:  # land found in cell
                        # The if blocks below detects
                        # if the cell is surrounded by water
                        if grid[i][j+1] == 0:
                            perimeter += 1
                        if grid[i][j-1] == 0:
                            perimeter += 1
                        if grid[i+1][j] == 0:
                            perimeter += 1
                        if grid[i-1][j] == 0:
                            perimeter += 1
    return perimeter
