#!/usr/bin/python3
"""island_perimeter() Function Module"""


def island_perimeter(grid):
    """Function to calculate the perimeter of the island grid"""

    answer = 0

    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    answer += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    answer += 1
                if x == 0 or grid[y][x - 1] == 0:
                    answer += 1
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    answer += 1
    return answer
