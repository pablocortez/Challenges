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

### Background Info

**Boolean Satisfiability (SAT)**
This determines if there exists an interpretation that satisifies a given Boolean formula.

A Boolean formula has four components:

1. Variables
    a. These variables take on only two Boolean values, i.e. true or false (1 for true, 0 for false)
2. "NOT" which is shown as x̄, this negates the value of the variable.  If x = 1, then x̄ = 0.
3. "AND" which uses the following notation: ∧
    a. (x1 ∧ x2)
    b. If x1 = 0 and x2 = 0, the expression above would evaluate to 0. Only (1 ∧ 1) evaluates to 1. (0 ∧ 1) = 0, (1 ∧ 0) = 0. Both x1 AND x2 have to be true for the expression to evaluate to true.
4. "OR" which uses the following notation: ∨
    a. (x1 ∨ x2)
    b. If at least one variable is true, the entire expression evaluates to true.
    c. (0 ∨ 1) = 1, (1 ∨ 1) = 1, (1 ∨ 0) = 1
    d. (0 ∨ 0) = 0

Here's an [excellent link](http://bigocheatsheet.com/) to a cheatsheet for Big O notation.

* **P vs. N-P Problems**
