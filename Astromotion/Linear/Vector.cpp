#include <stdio.h>
#include <stdlib.h>

#include "Linear.hpp"

Vector:: Vector ( int items )
       : V      ( NULL      )
       , P      ( NULL      )
{
  allocate ( items ) ;
}

Vector:: Vector ( double * address )
       : V      (          address )
       , P      ( NULL             )
{
}

Vector::~Vector(void)
{
  if ( NULL != P ) {
    delete [ ] P   ;
    V = NULL       ;
    P = NULL       ;
  }                ;
}

void Vector::allocate(int items)
{
  if ( NULL != P ) delete [ ] P ;
  V = new double [ items ]      ;
  P = V                         ;
}
