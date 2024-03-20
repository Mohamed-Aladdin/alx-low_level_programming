#!/usr/bin/python3
"""island_perimeter() Function Module"""


def island_perimeter(grid):
    """Function to calculate the perimeter of the island grid"""

    perim = 0

    for j, row in enumerate(grid):
        for i, cell in enumerate(row):
            if cell == 1:
                if j == 0 or grid[j - 1][i] == 0:
                    perim += 1
                if j == len(grid) - 1 or grid[j + 1][i] == 0:
                    perim += 1
                if i == 0 or grid[j][i - 1] == 0:
                    perim += 1
                if i == len(row) - 1 or grid[j][i + 1] == 0:
                    perim += 1
    return perim
