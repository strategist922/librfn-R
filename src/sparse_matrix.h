#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

struct sparseMatrix {
	float *values;
	int *columns;
	int *rowPointers;
	unsigned m; // number of rows
	unsigned nnz; // number of nonzero elements
};

const struct sparseMatrix INVALID = {
	(float*)-1, (int*)-1, (int*)-1, 0, 0
};

#endif /* SPARSE_MATRIX_H */
