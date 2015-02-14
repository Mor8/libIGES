/*
 * file: entity124.h
 *
 * Copyright 2015, Dr. Cirilo Bernardo (cirilo.bernardo@gmail.com)
 *
 * Description: IGES Entity 124: Transformation Matrix, Section 4.21, p.123+ (151+)
 *
 * This file is part of libIGES.
 *
 * libIGES is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libIGES is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ENTITY_124_H
#define ENTITY_124_H

#include "iges_entity.h"

// NOTE:
// The associated parameter data are:
// + R11: Real: Top Row
// + R12: Real:
// + R13: Real:
// + T1:  Real:
// + R21: Real: Second Row
// + R22: Real:
// + R23: Real:
// + T2:  Real:
// + R21: Real: Third Row
// + R22: Real:
// + R23: Real:
// + T2:  Real:
//
// Forms:
//  0: Matrix is Orthonormal and with a Determinant of 1; output will be in a Right-Hand Coordinate System
//  1: Matrix is Orthonormal and with a Determinant of -1; output will be in a Left-Hand Coordinate System
//  10, 11, 12: For Finite Element Analysis only
//
// Unused DE items:
// + Structure
// + Line Font Pattern
// + Level
// + View
// + Label Display Association
// + Line weight
// + Color number
//
// Since transforms may be nested we should provide the following operators for access:
// Set/GetChildTransform(): Sets/gets the child transform in the DE
// Set/GetTopTransform(): Sets/gets this entity's transform data
// GetTransformMatrix(): Gets the overall transform matrix
// Transform(X,Y,X): Performs a transform on the given point
//
// Note that GetTransformMatrix() produces the matrix by combining the
// Top matrix with the child's GetTransformMatrix(). This ensures correct
// application of all subordinate transforms.
//

class IGES_ENTITY_124 : IGES_ENTITY
{
private:
    // XXX - TO BE IMPLEMENTED

public:
    // XXX - TO BE IMPLEMENTED

}

#endif  // ENTITY_124_H
