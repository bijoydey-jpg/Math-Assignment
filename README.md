# Matrix Operations – Assignment Overview

This repository contains solutions to several matrix-related tasks, including transpose, symmetry checks, and basic matrix operations. Each task shows how to use loops, conditions, and mathematical logic in programming.

Task 1: Transpose of a Matrix

Subtask 1A: Transpose of a Rectangular Matrix
A rectangular matrix is taken as input.
A second matrix is used to store the transpose.
The transpose is obtained by swapping rows and columns:
transpose[j][i] = original[i][j]

Subtask 1B: In-Place Transpose of a Square Matrix
Works only for square matrices (N × N).
No second matrix is used.
Elements above the main diagonal are swapped with elements below it:
swap(a[i][j], a[j][i]) for i < j

Task 2: Check Whether a Matrix Is Symmetric
A matrix is symmetric if A = A^T.
Conditions:

The matrix must be square.

For all elements, a[i][j] = a[j][i].
The program takes user input and prints whether the matrix is symmetric or not.

Task 3: Check Whether a Matrix Is Skew-Symmetric
A matrix is skew-symmetric if A = -A^T.
Conditions:

The matrix must be square.

All diagonal elements must be zero.

For all elements, a[i][j] = -a[j][i].
The program prints whether the matrix is skew-symmetric.

Task 4: Matrix Operations
This task performs three basic operations between two matrices:

Matrix Addition
C[i][j] = A[i][j] + B[i][j]

Matrix Subtraction
C[i][j] = A[i][j] - B[i][j]

Matrix Multiplication
C[i][j] = sum(A[i][k] * B[k][j]) for all k.

Requirements:

Addition and subtraction require both matrices to have the same dimensions.

Multiplication requires A to be m×n and B to be n×p.

Summary
This project covers:

Transpose of rectangular and square matrices

In-place transpose

Symmetric matrix check

Skew-symmetric matrix check

Matrix addition, subtraction, and multiplication
