# /r/dailyprogrammer challenge - [Simplifying fractions](https://www.reddit.com/r/dailyprogrammer/comments/4uhqdb/20160725_challenge_277_easy_simplifying_fractions/)

## Description

A fraction exists of a numerator (top part) and a denominator (bottom part).
Simplifying (or reducing) fractions means to make the fraction as simple as possible. Meaning that the denominator is a close to 1 as possible. This can be done by dividing the numerator and denominator by their greatest common divisor

## Input/Output Description

### Input

Input is separated by a space; on the left the numerator, and on the right the denominator.

    4 8
    1536 78360
    51478 5536
    46410 119340
    7673 4729
    4096 1024

### Output

Output should be the most simplified numbers:

    1 2
    64 3265
    25739 2768
    7 18
    7673 4729
    4 1

### My Solution(s)

I wrote two solutions to this challenge. The first one takes in an input file (input.txt), solves everything, and then outputs (output.txt) all the simplified numbers. This is a more monolithic solution that works well to solve the Reddit challenge as-is.

The second solution is a CLI program that takes in terminal arguments as the numbers after being compiled. For example:

    ./short_version 4 8

The output would be:

    $ 1 2


