#ifndef FT97B_X_functional_h
#define FT97B_X_functional_h
/**********************************************************
* FT97B_X_functional.h: declarations for FT97B_X_functional for KS-DFT
* Robert Parrish, robparrish@gmail.com
* Autogenerated by MATLAB Script on 27-Oct-2010
*
***********************************************************/
#include <libmints/properties.h>
#include <libciomr/libciomr.h>
#include "functional.h"
#include <stdlib.h>
#include <string>
#include <vector>

using namespace psi;
using namespace boost;
using namespace std;

namespace psi { namespace functional {

class FT97B_X_Functional : public Functional {
public:
    FT97B_X_Functional(int npoints, int deriv);
    virtual ~FT97B_X_Functional();
    virtual void computeRKSFunctional(shared_ptr<Properties> prop);
    virtual void computeUKSFunctional(shared_ptr<Properties> prop);
};
}}
#endif

