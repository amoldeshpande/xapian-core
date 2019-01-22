/* This file was generated automatically by the Snowball to ISO C++ compiler */
/* http://snowballstem.org/ */

#include "steminternal.h"

namespace Xapian {

class InternalStemNepali : public SnowballStemImplementation {
    int r_remove_category_3();
    int r_remove_category_2();
    int r_check_category_2();
    int r_remove_category_1();

  public:

    InternalStemNepali();
    ~InternalStemNepali();
    int stem();
    std::string get_description() const;
};

}
