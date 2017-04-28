#ifndef LINEAR_ALGEBRA_HPP
#define LINEAR_ALGEBRA_HPP

class Vector
{
  public:

    explicit Vector (int items) ;
    explicit Vector (double * address) ;
    virtual ~Vector (void) ;

  protected:

    double * V ;
    double * P ;

    virtual void allocate(int items) ;

  private:

} ;

#endif // LINEAR_ALGEBRA_HPP
