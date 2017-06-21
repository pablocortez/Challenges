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

## Background Info
==================================================
#### **Boolean Satisfiability (SAT)**
=======
### Background Info

**Boolean Satisfiability (SAT)**

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

#### **P vs. N-P Problems**
P and NP are two categories of problems. P or NP determines whether a problem can be solved by a computer, and if it's easy or not to do so. P referers to problems that are "easy" to solve for a computer. Examples of these are a Rubik's cube, because a computer can, well, _compute_ a solution pretty easily. By "easy", it's meant that in a problem of category P, there is an algorithm that solves the problem in __P__ olynomial time.

For some problems, however, it may not be easy to find an answer quickly, but if one is provided, then it can be verified easily. These are class NP. An example is a sudoku puzzle. It's easy to check if a sudoku puzzle has been solved correctly, but it takes a considerably long time to solve a sudoku grid. Another example could be a 2000-piece jigsaw puzzle. It's very easy and quick to verify if it's been solved correctly, all we have to do is look at it. However, actually solving it is time consuming.

**What is Polynomial time?**
Polynomial time means that the time to complete the problem (solve the task) varies as a polynomal function on the size of the input to the algorithm.
The time a computation takes depends on the amount of input data; it takes longer to alphabetically sort a list of 1000 students than 10 students. Depending on the computation, the time based on the amount of data will be different though. A computation like multiplying, dividing, subtracting or adding is much different than a problem dealing with combinations or permutations, like the Traveling Salesman Problem (TSP).

**Example:**
For a particular algorithm, the time dependency could be given by:

    T = 2.3n^2 + 3n + 6

This would be a polynomial algorithm, since T is given in polynomial terms. As n gets very large, the first term in the T function will be much larger than the others, so we can ignore the other terms without the introduction of much of an error. Since we only care about the proportion between T (time) and n (the input), we can drop the 2.3 factor, shortening it all to

    T = n^2

Or the more common notation (big-O notation):

    O(n^2)

Other algorithms may be O(n) or O(n^3), but they are all polynomial.
An algorithm could also run in constant time, so no matter how much input data there is, the time is the same. This is written as O(1).
