/*************************************************************************
 *                                                                       *
 * Vega FEM Simulation Library Version 3.1                               *
 *                                                                       *
 *  Copyright (C) 2007 CMU, 2009 MIT, 2016 USC                           *
 *                                                                       *
 * All rights reserved.                                                  *
 *                                                                       *
 * Code author: Jernej Barbic                                            *
 * http://www.jernejbarbic.com/code                                      *
 *                                                                       *
 * Research: Jernej Barbic, Fun Shing Sin, Daniel Schroeder,             *
 *           Doug L. James, Jovan Popovic                                *
 *                                                                       *
 * Funding: National Science Foundation, Link Foundation,                *
 *          Singapore-MIT GAMBIT Game Lab,                               *
 *          Zumberge Research and Innovation Fund at USC                 *
 *                                                                       *
 * This utility is free software; you can redistribute it and/or         *
 * modify it under the terms of the BSD-style license that is            *
 * included with this library in the file LICENSE.txt                    *
 *                                                                       *
 * This utility is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the file     *
 * LICENSE.TXT for more details.                                         *
 *                                                                       *
 *************************************************************************/

/*
  Helper class for the ARPACK solver.
*/

#ifndef _INVMKSOLVER_H_
#define _INVMKSOLVER_H_

#include "linearSolver.h"
#include "sparseMatrix.h"

// computes x |--> M^{-1} K x
class InvMKSolver
{
public:
  InvMKSolver(LinearSolver * invMSolver, SparseMatrix * K);
  ~InvMKSolver();
  void ComputeInvMK(double * x, double * output);

protected:
  double * buffer;
  LinearSolver * invMSolver;
  SparseMatrix * K;
};

#endif
