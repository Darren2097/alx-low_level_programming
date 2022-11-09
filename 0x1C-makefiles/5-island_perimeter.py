#!/usr/bin/python3
"""Obtains the perimeter of the island described in grid"""


def island_perimeter(grid):
    """perimeter of island that needs to be calculated"""

    perimeter = 0
    length = 0
    breadth = 0

    if not grid:
        return perimeter

    if type(grid) is not list:
        return perimeter

    rows = len(grid)
    if rows < 1:
        return perimeter

    columns = len(grid[0])

    for r in range(rows):
        ones = 0
        for c in range(columns):
            if grid[r][c] == 1:
                ones += 1
        if ones > length:
            length = ones

    for c in range(columns):
        ones = 0
        for r in range(rows):
            if grid[r][c] == 1:
                ones += 1
        if ones > breadth:
            breadth = ones

    perimeter = (2 * length) + (2 * breadth)

    return perimeter
