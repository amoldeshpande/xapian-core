/* This file was generated automatically by the Snowball to ISO C++ compiler */
/* http://snowballstem.org/ */

#include "steminternal.h"

namespace Xapian {

class InternalStemIndonesian : public SnowballStemImplementation {
    int I_prefix;
    int I_measure;
    int r_remove_suffix();
    int r_remove_second_order_prefix();
    int r_remove_first_order_prefix();
    int r_remove_possessive_pronoun();
    int r_remove_particle();

  public:
    int r_VOWEL();
    int r_SUFFIX_I_OK();
    int r_SUFFIX_AN_OK();
    int r_SUFFIX_KAN_OK();
    int r_KER();

    InternalStemIndonesian();
    ~InternalStemIndonesian();
    int stem();
    std::string get_description() const;
};

}