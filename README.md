# Matrix Operations – Assignment Overview

MATRIX OPERATIONS - ASSIGNMENT README

This repository contains solutions to several matrix-related tasks.
All tasks demonstrate the use of loops, conditions, and mathematical logic in programming.

TASK 1: TRANSPOSE OF A MATRIX
A. Transpose of a Rectangular Matrix

The program takes a rectangular matrix as input.

A second matrix is used to store the transpose.

Transpose rule:
transpose[j][i] = original[i][j]

B. In-Place Transpose of a Square Matrix

Works only for square matrices (N x N).

No second matrix is used.

Elements across the diagonal are swapped:
swap(a[i][j], a[j][i]) when i < j

TASK 2: CHECK WHETHER A MATRIX IS SYMMETRIC

A matrix is symmetric if:
A = A^T

Conditions:

The matrix must be square.

For every pair of indices,
a[i][j] = a[j][i]

Output:
The program prints "Symmetric" or "Not symmetric".

TASK 3: CHECK WHETHER A MATRIX IS SKEW-SYMMETRIC

A matrix is skew-symmetric if:
A = -A^T

Conditions:

The matrix must be square.

All diagonal elements must be zero.

For all elements,
a[i][j] = -a[j][i]

Output:
The program prints whether the matrix is skew-symmetric.

TASK 4: MATRIX OPERATIONS

This task performs three basic operations between two matrices.

Matrix Addition
Formula:
C[i][j] = A[i][j] + B[i][j]
Requirement: Same dimensions

Matrix Subtraction
Formula:
C[i][j] = A[i][j] - B[i][j]
Requirement: Same dimensions

Matrix Multiplication
Formula:
C[i][j] = sum over k ( A[i][k] * B[k][j] )
Requirement:
If A is (m x n), then B must be (n x p)

SUMMARY

This project includes:

Transpose of rectangular matrices

In-place transpose for square matrices

Symmetric matrix check

Skew-symmetric matrix check

Matrix addition, subtraction, and multiplication

It provides a complete introduction to essential matrix operations used in programming and linear algebra.



