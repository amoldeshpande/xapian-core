/* This file was generated automatically by the Snowball to ISO C++ compiler */
/* http://snowballstem.org/ */

#include "steminternal.h"

namespace Xapian {

class InternalStemIrish : public SnowballStemImplementation {
    int I_p2;
    int I_p1;
    int I_pV;
    int r_verb_sfx();
    int r_deriv();
    int r_noun_sfx();
    int r_mark_regions();
    int r_initial_morph();
    int r_RV();
    int r_R2();
    int r_R1();

  public:

    InternalStemIrish();
    ~InternalStemIrish();
    int stem();
    std::string get_description() const;
};

}
