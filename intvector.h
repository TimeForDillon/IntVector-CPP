/*******************************************************************************
 * AUTHOR        : Dillon Welsh
 * LAB09         : INTVECTOR
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 10/06/2020
 ******************************************************************************/

#ifndef INTVECTOR_H
#define INTVECTOR_H

#include <iostream>

using namespace std;

class IntVector
{
private:
    unsigned sz;        // CALC - number of used elements
    unsigned cap;       // CALC - max number of elements
    int * data;         // CALC - dynamic array

public:
    /********************************
     ** CONSTRUCTORS & DESTRUCTORS **
     ********************************/
    IntVector();                            // Constructor
    IntVector(unsigned size);               // Constructor
    IntVector(unsigned size, int value);    // Constructor

    /***************
     ** ACCESSORS **
     ***************/
    unsigned size() const;
    unsigned capacity() const;
    bool empty() const;
    const int & at(unsigned index) const;
};

/*******************************************************************************
 * IntVector Class
 *  This class represents a vector of ints. This class replicates the vector
 *  class that is currently in c++.
 ******************************************************************************/

/********************************
 ** CONSTRUCTORS & DESTRUCTORS **
 ********************************/

/*******************************************************************************
 * IntVector();
 * Constructor; Sets size and capacity of dynamic array to 0.
 * Parameters: none
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * IntVector(unsigned size);
 * Constructor; Sets size and capacity to passed value for dynamic array. Sets
 *              each element of array to 0.
 * Parameters: unsigned
 * Return: none
 ******************************************************************************/

/*******************************************************************************
 * IntVector(unsigned size, int value);
 * Constructor; Sets size and capacity to passed values for dynamic array. Sets
 *              each element of array to passed value.
 * Parameters: unsigned, int
 * Return: none
 ******************************************************************************/

/***************
 ** ACCESSORS **
 ***************/

/*******************************************************************************
 * unsigned size() const;
 *
 * Accessor; Returns current size of dynamic array.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: unsigned
 ******************************************************************************/

/*******************************************************************************
 * unsigned capacity() const;
 *
 * Accessor; Returns current capacity of dynamic array.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: unsigned
 ******************************************************************************/

/*******************************************************************************
 * bool empty() const;
 *
 * Accessor; Returns true if dynamic array is empty.
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: bool
 ******************************************************************************/

/*******************************************************************************
 * const int & at(unsigned index) const;
 *
 * Accessor; Returns value in dynamic array at passed value index.
 * -----------------------------------------------------------------------------
 * Parameters: unsigned
 * -----------------------------------------------------------------------------
 * Return: const int &
 ******************************************************************************/

#endif // INTVECTOR_H
