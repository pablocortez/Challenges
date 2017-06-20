# Zappos Coding Challenge

## Description (from Zappos website, now taken down):

Your goal is to write a program to solve a series of puzzles.

* The first line of each input contains the number of rows and columns in the puzzle.

* Each puzzle contains a board with several pairs of matching colors, which are each represented by a letter.
* Blank spaces are represented with the '.' character.
* The goal is to connect each matching pair of colors with a single path, leaving no blank spaces on the board.

* There may be more than one solution to a given puzzle.

To receive credit, you must solve all 20 of the input puzzles.  Your program must also be able to solve arbitrary
6x6 puzzles that you have not seen yet.

### Input:
    6 6
    .....o
    ......
    .yr...
    ...g.y
    .g.orb
    ...b..

    6 6
    ...b.y
    ...g.b
    ..ry..
    ......
    ...gr.
    ......

    6 6
    .....o
    ......
    .yr...
    o..g..
    g..br.
    b..y..

    6 6
    ...ry.
    .g..g.
    ......
    b.br..
    y.....
    ......

### Output:
  oooooo
  oyyyyy
  oyrrry
  ogggry
  ogoorb
  ooobbb

  bbbbyy
  bgggyb
  bgryyb
  bgrrrb
  bgggrb
  bbbbbb

  oooooo
  oyyyyy
  oyrrry
  ogggry
  ggbbry
  bbbyyy

  bbbryy
  bgbrgy
  bgbrgy
  bgbrgy
  yggggy
  yyyyyy
