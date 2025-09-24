#ifndef __Produit_vecteur_matrice__H__
#define __Produit_vecteur_matrice__H__

//matrix definition
struct matrix {
    int row_size;
    int cols_size;
    float **m;
}matrix;

// fonction to multiply a matrix by a vector
// let A as our matrix and V as our vector
// precondition: A cols_size should egals to V row_size giving asset()
(float**)matrix_multiply(matrix*A,matrix*v);

#endif __Produit_vecteur_matrice__H__