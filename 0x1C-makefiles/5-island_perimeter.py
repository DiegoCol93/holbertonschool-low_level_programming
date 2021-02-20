#!/usr/bin/python3
""" Module for storing the island_perimeter calculation method. """


def island_perimeter(grid):
    """ Calculates the perimeter of an island given the 2D matrix grid. """

    y = 0
    perim_sum = 0
    tot_perim = 0

    for row in grid:
        x = 0
        for zone in row:
            if zone == 1:
                # Assume is a lone zone with perim 4.
                perim_sum = 4
                # If zone to the right is occupied.
                if row[x + 1] == 1:
                    perim_sum -= 1
                # If zone to the left is occupied.
                if row[x - 1] == 1:
                    perim_sum -= 1
                # If zone above is occupied.
                if grid[y-1][x] == 1:
                    perim_sum -= 1
                # If zone below is occupied.
                if grid[y + 1][x] == 1:
                    perim_sum -= 1
                tot_perim += perim_sum
            x += 1
        y += 1
    return(tot_perim)
