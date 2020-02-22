#!/usr/bin/python3

def island_perimeter(grid):
    complete_perim = 0

    if not grid:
        return 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] != 0:
                perim = 4
                if (i - 1) >= 0 and grid[(i - 1)][j] == 1:
                    perim -= 1
                if (i + 1) < len(grid) and grid[(i + 1)][j] == 1:
                    perim -= 1
                if (j + 1) < len(grid[i]) and grid[i][j + 1] == 1:
                    perim -= 1
                if (j - 1) >= 0 and grid[i][j - 1] == 1:
                    perim -= 1
                complete_perim += perim
    return complete_perim