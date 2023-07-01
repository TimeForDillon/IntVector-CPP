#include "intvector.h"

/*******************************************************************************
 * Constructor IntVector: Class IntVector
 *______________________________________________________________________________
 * This constructor sets size and capacity to 0. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

IntVector::IntVector()
{
    // PROCESSING - initialize size and capacity of array to 0
    sz = 0;
    cap = 0;
}

/*******************************************************************************
 * Constructor IntVector: Class IntVector
 *______________________________________________________________________________
 * This constructor sets size and cap to passed value and each element in array
 * to 0. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      unsigned size: size of dynamic array
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

IntVector::IntVector(unsigned size)     // IN - size of dynamic array
{
    // PROCESSING - set size and capacity to passed value
    sz = size;
    cap = size;
    // PROECSSING - initialize dynamic array
    data = new int[size];

    // PROCESSING - fill dynamic array with 0
    for(unsigned i = 0; i < size; i++)
    {
        data[i] = 0;
    }
}

/*******************************************************************************
 * Constructor IntVector: Class IntVector
 *______________________________________________________________________________
 * This constructor sets size and cap to passed value and each element in array
 * to passed value. returns nothing.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      unsigned size: size of dynamic array
 *      int value    : number to go into each element
 *
 * POST-CONDITIONS
 *      N/A
 ******************************************************************************/

IntVector::IntVector(unsigned size,         // IN - size of dynamic array
                     int value)             // IN - value for each element
{
    // PROCESSING - set size and capacity to passed value
    sz = size;
    cap = size;
    // PROECSSING - initialize dynamic array
    data = new int[size];

    // PROCESSING - fill dynamic array with passed value
    for(unsigned i = 0; i < size; i++)
    {
        data[i] = value;
    }
}

/*******************************************************************************
 * Method size: Class IntVector
 *______________________________________________________________________________
 * This method returns the current size of the dynamic array.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      unsigned
 ******************************************************************************/

unsigned IntVector::size() const
{
    // PROCESSING - return size
    return sz;
}

/*******************************************************************************
 * Method capacity: Class IntVector
 *______________________________________________________________________________
 * This method returns the current capacity of the dynamic array.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      unsigned
 ******************************************************************************/

unsigned IntVector::capacity() const
{
    // PROCESSING - return capacity
    return cap;
}

/*******************************************************************************
 * Method empty: Class IntVector
 *______________________________________________________________________________
 * This method returns true if the current size of the dynamic array is 0.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      N/A
 *
 * POST-CONDITIONS
 *      bool
 ******************************************************************************/

bool IntVector::empty() const
{
    // PROCESSING - return true if size is 0
    if(sz == 0) return true;
    else return false;
}

/*******************************************************************************
 * Method at: Class IntVector
 *______________________________________________________________________________
 * This method returns the current value in the dynamic array at the passed
 * value element.
 *______________________________________________________________________________
 * PRE-CONDITIONS
 *  The following need previously defined values:
 *      unsigned index: index for array
 *
 * POST-CONDITIONS
 *      const int &
 ******************************************************************************/

const int& IntVector::at(unsigned index) const      // IN - index of array
{
    // PROCESSING - return value stored in array[passed value] if within bounds
    if(index < sz) return data[index];
}
