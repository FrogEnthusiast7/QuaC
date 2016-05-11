#ifndef KRON_P_H_
#define KRON_P_H_

#include "operators_p.h"

long   _get_loop_limit(op_type,int);
double _get_val_in_subspace(long,op_type,int,long*,long*);
void   _add_to_dense_ham(double,int,int,op_type,int);
void   _add_to_dense_ham_comb(double,int,int,op_type,int,
                            int,int,op_type,int);
void   _add_to_PETSc_kron(PetscScalar,int,int,op_type,int,int,int);
void   _add_to_PETSc_kron_comb(PetscScalar,int,int,op_type,int,int,int,
                             op_type,int,int,int,int);
void   _add_to_PETSc_kron_lin(PetscScalar,int,int,op_type,int,int,int);
void   _add_to_PETSc_kron_lin_comb(PetscScalar,int,int,op_type,int);

#endif
