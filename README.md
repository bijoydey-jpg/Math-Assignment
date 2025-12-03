# Math-Assignment
📌 Task 1: Transpose of a Matrix
🔹 Subtask 1A: Transpose of a Rectangular Matrix

A rectangular matrix is taken as input from the user.

A second matrix is used to store the transpose.

The transpose is obtained by swapping rows with columns:

transpose
[
𝑗
]
[
𝑖
]
=
original
[
𝑖
]
[
𝑗
]
transpose[j][i]=original[i][j]
🔹 Subtask 1B: In-Place Transpose of a Square Matrix

Works only for square matrices (N × N).

No second matrix is used.

Elements above the main diagonal are swapped with elements below it.

swap
(
𝑎
[
𝑖
]
[
𝑗
]
,
𝑎
[
𝑗
]
[
𝑖
]
)
for 
𝑖
<
𝑗
swap(a[i][j],a[j][i])for i<j
📌 Task 2: Check Whether a Matrix Is Symmetric

A matrix is symmetric if:

𝐴
=
𝐴
𝑇
A=A
T

This means:

The matrix must be square.

For all elements:

𝑎
[
𝑖
]
[
𝑗
]
=
𝑎
[
𝑗
]
[
𝑖
]
a[i][j]=a[j][i]

The program takes user input and outputs "Symmetric" or "Not symmetric".

📌 Task 3: Check Whether a Matrix Is Skew-Symmetric

A matrix is skew-symmetric if:

𝐴
=
−
𝐴
𝑇
A=−A
T

Which means:

The matrix must be square.

Diagonal elements must be zero.

Off-diagonal elements follow:

𝑎
[
𝑖
]
[
𝑗
]
=
−
𝑎
[
𝑗
]
[
𝑖
]
a[i][j]=−a[j][i]

The program outputs whether the given matrix satisfies the conditions.

📌 Task 4: Matrix Operations

This task performs three basic operations between two matrices:

➕ Matrix Addition
𝐶
[
𝑖
]
[
𝑗
]
=
𝐴
[
𝑖
]
[
𝑗
]
+
𝐵
[
𝑖
]
[
𝑗
]
C[i][j]=A[i][j]+B[i][j]
➖ Matrix Subtraction
𝐶
[
𝑖
]
[
𝑗
]
=
𝐴
[
𝑖
]
[
𝑗
]
−
𝐵
[
𝑖
]
[
𝑗
]
C[i][j]=A[i][j]−B[i][j]
✖️ Matrix Multiplication
𝐶
[
𝑖
]
[
𝑗
]
=
∑
𝑘
=
0
𝑛
−
1
𝐴
[
𝑖
]
[
𝑘
]
×
𝐵
[
𝑘
]
[
𝑗
]
C[i][j]=
k=0
∑
n−1
	​

A[i][k]×B[k][j]

Rules:

Addition & subtraction require matrices of the same dimension

Multiplication requires:

𝐴
(
m
×
n
)
×
𝐵
(
n
×
p
)
A(m×n)×B(n×p)
📁 Summary

This project covers:

✔ Transpose of rectangular and square matrices
✔ In-place matrix operations
✔ Symmetric matrix check
✔ Skew-symmetric matrix check
✔ Matrix addition, subtraction, and multiplication

It is ideal for understanding matrix manipulation concepts and implementing them in C/C++.
