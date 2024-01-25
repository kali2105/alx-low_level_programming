#!/usr/bin/python3
"""
module for perimeter of The island
"""

def island_perimeter(grid):
    """A fct that returns the perimeter of The island
    Arguments:
    grid(list) = list of integers 
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                neighbors = 0
                if row > 0 and grid[row - 1][col] == 1:
                    neighbors += 1
                if row < rows - 1 and grid[row + 1][col] == 1:
                    neighbors += 1
                if col > 0 and grid[row][col - 1] == 1:
                    neighbors += 1
                if col < cols - 1 and grid[row][col + 1] == 1:
                    neighbors += 1
                perimeter += 4 - neighbors

    return perimeter


if __name__ == "__main__":
    grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
            ]
    print(island_perimeter(grid))
