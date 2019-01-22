/* This file was generated automatically by the Snowball to ISO C++ compiler */
/* http://snowballstem.org/ */

#include <config.h>
#include <limits.h>
#include "indonesian.h"

static int tr_VOWEL(Xapian::StemImplementation * this_ptr) {
    return (static_cast<Xapian::InternalStemIndonesian *>(this_ptr))->r_VOWEL();
}

static int tr_SUFFIX_I_OK(Xapian::StemImplementation * this_ptr) {
    return (static_cast<Xapian::InternalStemIndonesian *>(this_ptr))->r_SUFFIX_I_OK();
}

static int tr_SUFFIX_AN_OK(Xapian::StemImplementation * this_ptr) {
    return (static_cast<Xapian::InternalStemIndonesian *>(this_ptr))->r_SUFFIX_AN_OK();
}

static int tr_SUFFIX_KAN_OK(Xapian::StemImplementation * this_ptr) {
    return (static_cast<Xapian::InternalStemIndonesian *>(this_ptr))->r_SUFFIX_KAN_OK();
}

static int tr_KER(Xapian::StemImplementation * this_ptr) {
    return (static_cast<Xapian::InternalStemIndonesian *>(this_ptr))->r_KER();
}

static const among_function af[5] =
{
/*  1 */ tr_VOWEL,
/*  2 */ tr_SUFFIX_I_OK,
/*  3 */ tr_SUFFIX_AN_OK,
/*  4 */ tr_SUFFIX_KAN_OK,
/*  5 */ tr_KER
};

static const symbol s_pool[] = {
#define s_0_0 0
'k', 'a', 'h',
#define s_0_1 3
'l', 'a', 'h',
#define s_0_2 6
'p', 'u', 'n',
#define s_1_0 9
'n', 'y', 'a',
#define s_1_1 12
'k', 'u',
#define s_1_2 14
'm', 'u',
#define s_2_0 16
'i',
#define s_2_1 (s_2_2 + 1)
#define s_2_2 17
'k', 'a', 'n',
#define s_3_0 20
'd', 'i',
#define s_3_1 22
'k', 'e',
#define s_3_2 s_3_3
#define s_3_3 24
'm', 'e', 'm',
#define s_3_4 s_3_5
#define s_3_5 27
'm', 'e', 'n', 'g',
#define s_3_6 31
'm', 'e', 'n', 'y',
#define s_3_7 35
'p', 'e', 'm',
#define s_3_8 s_3_9
#define s_3_9 38
'p', 'e', 'n', 'g',
#define s_3_10 42
'p', 'e', 'n', 'y',
#define s_3_11 46
't', 'e', 'r',
#define s_4_0 s_4_1
#define s_4_1 49
'b', 'e', 'l', 'a', 'j', 'a', 'r',
#define s_4_2 56
'b', 'e', 'r',
#define s_4_3 s_4_4
#define s_4_4 59
'p', 'e', 'l', 'a', 'j', 'a', 'r',
#define s_4_5 66
'p', 'e', 'r',
};


static const struct among a_0[3] =
{
/*  0 */ { 3, s_0_0, -1, 1},
/*  1 */ { 3, s_0_1, -1, 1},
/*  2 */ { 3, s_0_2, -1, 1}
};


static const struct among a_1[3] =
{
/*  0 */ { 3, s_1_0, -1, 1},
/*  1 */ { 2, s_1_1, -1, 1},
/*  2 */ { 2, s_1_2, -1, 1}
};


static const struct among a_2[3] =
{
/*  0 */ { 1, s_2_0, -1, 1},
/*  1 */ { 2, s_2_1, -1, 1},
/*  2 */ { 3, s_2_2, 1, 1}
};

static const unsigned char af_2[3] =
{
/*  0 */ 2 /* tr_SUFFIX_I_OK */,
/*  1 */ 3 /* tr_SUFFIX_AN_OK */,
/*  2 */ 4 /* tr_SUFFIX_KAN_OK */
};


static const struct among a_3[12] =
{
/*  0 */ { 2, s_3_0, -1, 1},
/*  1 */ { 2, s_3_1, -1, 2},
/*  2 */ { 2, s_3_2, -1, 1},
/*  3 */ { 3, s_3_3, 2, 5},
/*  4 */ { 3, s_3_4, 2, 1},
/*  5 */ { 4, s_3_5, 4, 1},
/*  6 */ { 4, s_3_6, 4, 3},
/*  7 */ { 3, s_3_7, -1, 6},
/*  8 */ { 3, s_3_8, -1, 2},
/*  9 */ { 4, s_3_9, 8, 2},
/* 10 */ { 4, s_3_10, 8, 4},
/* 11 */ { 3, s_3_11, -1, 1}
};

static const unsigned char af_3[12] =
{
/*  0 */ 0,
/*  1 */ 0,
/*  2 */ 0,
/*  3 */ 0,
/*  4 */ 0,
/*  5 */ 0,
/*  6 */ 1 /* tr_VOWEL */,
/*  7 */ 0,
/*  8 */ 0,
/*  9 */ 0,
/* 10 */ 1 /* tr_VOWEL */,
/* 11 */ 0
};


static const struct among a_4[6] =
{
/*  0 */ { 2, s_4_0, -1, 3},
/*  1 */ { 7, s_4_1, 0, 4},
/*  2 */ { 3, s_4_2, 0, 3},
/*  3 */ { 2, s_4_3, -1, 1},
/*  4 */ { 7, s_4_4, 3, 2},
/*  5 */ { 3, s_4_5, 3, 1}
};

static const unsigned char af_4[6] =
{
/*  0 */ 5 /* tr_KER */,
/*  1 */ 0,
/*  2 */ 0,
/*  3 */ 0,
/*  4 */ 0,
/*  5 */ 0
};

static const unsigned char g_vowel[] = { 17, 65, 16 };

static const symbol s_0[] = { 'e', 'r' };
static const symbol s_1[] = { 's' };
static const symbol s_2[] = { 's' };
static const symbol s_3[] = { 'p' };
static const symbol s_4[] = { 'p' };
static const symbol s_5[] = { 'a', 'j', 'a', 'r' };
static const symbol s_6[] = { 'a', 'j', 'a', 'r' };

int Xapian::InternalStemIndonesian::r_remove_particle() { /* backwardmode */
    ket = c; /* [, line 53 */
    if (c - 2 <= lb || (p[c - 1] != 104 && p[c - 1] != 110)) return 0; /* substring, line 53 */
    if (!(find_among_b(s_pool, a_0, 3, 0, 0))) return 0;
    bra = c; /* ], line 53 */
    if (slice_del() == -1) return -1; /* delete, line 54 */
    I_measure -= 1; /* $measure -= <integer expression>, line 54 */
    return 1;
}

int Xapian::InternalStemIndonesian::r_remove_possessive_pronoun() { /* backwardmode */
    ket = c; /* [, line 59 */
    if (c - 1 <= lb || (p[c - 1] != 97 && p[c - 1] != 117)) return 0; /* substring, line 59 */
    if (!(find_among_b(s_pool, a_1, 3, 0, 0))) return 0;
    bra = c; /* ], line 59 */
    if (slice_del() == -1) return -1; /* delete, line 60 */
    I_measure -= 1; /* $measure -= <integer expression>, line 60 */
    return 1;
}

int Xapian::InternalStemIndonesian::r_SUFFIX_KAN_OK() { /* backwardmode */
    /* and, line 87 */
    if (!(I_prefix != 3)) return 0; /* $(<integer expression> != <integer expression>), line 87 */
    if (!(I_prefix != 2)) return 0; /* $(<integer expression> != <integer expression>), line 87 */
    return 1;
}

int Xapian::InternalStemIndonesian::r_SUFFIX_AN_OK() { /* backwardmode */
    if (!(I_prefix != 1)) return 0; /* $(<integer expression> != <integer expression>), line 91 */
    return 1;
}

int Xapian::InternalStemIndonesian::r_SUFFIX_I_OK() { /* backwardmode */
    if (!(I_prefix <= 2)) return 0; /* $(<integer expression> <= <integer expression>), line 95 */
    {   int m1 = l - c; (void)m1; /* not, line 130 */
        if (c <= lb || p[c - 1] != 's') goto lab0; /* literal, line 130 */
        c--;
        return 0;
    lab0:
        c = l - m1;
    }
    return 1;
}

int Xapian::InternalStemIndonesian::r_remove_suffix() { /* backwardmode */
    ket = c; /* [, line 134 */
    if (c <= lb || (p[c - 1] != 105 && p[c - 1] != 110)) return 0; /* substring, line 134 */
    if (!(find_among_b(s_pool, a_2, 3, af_2, af))) return 0;
    bra = c; /* ], line 134 */
    if (slice_del() == -1) return -1; /* delete, line 136 */
    I_measure -= 1; /* $measure -= <integer expression>, line 136 */
    return 1;
}

int Xapian::InternalStemIndonesian::r_VOWEL() { /* forwardmode */
    if (in_grouping_U(g_vowel, 97, 117, 0)) return 0; /* grouping vowel, line 143 */
    return 1;
}

int Xapian::InternalStemIndonesian::r_KER() { /* forwardmode */
    if (out_grouping_U(g_vowel, 97, 117, 0)) return 0; /* non vowel, line 145 */
    if (!(eq_s(2, s_0))) return 0; /* literal, line 145 */
    return 1;
}

int Xapian::InternalStemIndonesian::r_remove_first_order_prefix() { /* forwardmode */
    int among_var;
    bra = c; /* [, line 148 */
    if (c + 1 >= l || (p[c + 1] != 105 && p[c + 1] != 101)) return 0; /* substring, line 148 */
    among_var = find_among(s_pool, a_3, 12, af_3, af);
    if (!(among_var)) return 0;
    ket = c; /* ], line 148 */
    switch (among_var) { /* among, line 148 */
        case 1:
            if (slice_del() == -1) return -1; /* delete, line 149 */
            I_prefix = 1; /* $prefix = <integer expression>, line 149 */
            I_measure -= 1; /* $measure -= <integer expression>, line 149 */
            break;
        case 2:
            if (slice_del() == -1) return -1; /* delete, line 150 */
            I_prefix = 3; /* $prefix = <integer expression>, line 150 */
            I_measure -= 1; /* $measure -= <integer expression>, line 150 */
            break;
        case 3:
            I_prefix = 1; /* $prefix = <integer expression>, line 151 */
            {   int ret = slice_from_s(1, s_1); /* <-, line 151 */
                if (ret < 0) return ret;
            }
            I_measure -= 1; /* $measure -= <integer expression>, line 151 */
            break;
        case 4:
            I_prefix = 3; /* $prefix = <integer expression>, line 152 */
            {   int ret = slice_from_s(1, s_2); /* <-, line 152 */
                if (ret < 0) return ret;
            }
            I_measure -= 1; /* $measure -= <integer expression>, line 152 */
            break;
        case 5:
            I_prefix = 1; /* $prefix = <integer expression>, line 153 */
            I_measure -= 1; /* $measure -= <integer expression>, line 153 */
            {   int c1 = c; /* or, line 153 */
                {   int c2 = c; /* and, line 153 */
                    if (in_grouping_U(g_vowel, 97, 117, 0)) goto lab1; /* grouping vowel, line 153 */
                    c = c2;
                    {   int ret = slice_from_s(1, s_3); /* <-, line 153 */
                        if (ret < 0) return ret;
                    }
                }
                goto lab0;
            lab1:
                c = c1;
                if (slice_del() == -1) return -1; /* delete, line 153 */
            }
        lab0:
            break;
        case 6:
            I_prefix = 3; /* $prefix = <integer expression>, line 154 */
            I_measure -= 1; /* $measure -= <integer expression>, line 154 */
            {   int c3 = c; /* or, line 154 */
                {   int c4 = c; /* and, line 154 */
                    if (in_grouping_U(g_vowel, 97, 117, 0)) goto lab3; /* grouping vowel, line 154 */
                    c = c4;
                    {   int ret = slice_from_s(1, s_4); /* <-, line 154 */
                        if (ret < 0) return ret;
                    }
                }
                goto lab2;
            lab3:
                c = c3;
                if (slice_del() == -1) return -1; /* delete, line 154 */
            }
        lab2:
            break;
    }
    return 1;
}

int Xapian::InternalStemIndonesian::r_remove_second_order_prefix() { /* forwardmode */
    int among_var;
    bra = c; /* [, line 164 */
    if (c + 1 >= l || p[c + 1] != 101) return 0; /* substring, line 164 */
    among_var = find_among(s_pool, a_4, 6, af_4, af);
    if (!(among_var)) return 0;
    ket = c; /* ], line 164 */
    switch (among_var) { /* among, line 164 */
        case 1:
            if (slice_del() == -1) return -1; /* delete, line 165 */
            I_prefix = 2; /* $prefix = <integer expression>, line 165 */
            I_measure -= 1; /* $measure -= <integer expression>, line 165 */
            break;
        case 2:
            {   int ret = slice_from_s(4, s_5); /* <-, line 166 */
                if (ret < 0) return ret;
            }
            I_measure -= 1; /* $measure -= <integer expression>, line 166 */
            break;
        case 3:
            if (slice_del() == -1) return -1; /* delete, line 167 */
            I_prefix = 4; /* $prefix = <integer expression>, line 167 */
            I_measure -= 1; /* $measure -= <integer expression>, line 167 */
            break;
        case 4:
            {   int ret = slice_from_s(4, s_6); /* <-, line 168 */
                if (ret < 0) return ret;
            }
            I_prefix = 4; /* $prefix = <integer expression>, line 168 */
            I_measure -= 1; /* $measure -= <integer expression>, line 168 */
            break;
    }
    return 1;
}

int Xapian::InternalStemIndonesian::stem() { /* forwardmode */
    I_measure = 0; /* $measure = <integer expression>, line 174 */
    {   int c1 = c; /* do, line 175 */
        while(1) { /* repeat, line 175 */
            int c2 = c;
            {    /* gopast */ /* grouping vowel, line 175 */
                int ret = out_grouping_U(g_vowel, 97, 117, 1);
                if (ret < 0) goto lab1;
                c += ret;
            }
            I_measure += 1; /* $measure += <integer expression>, line 175 */
            continue;
        lab1:
            c = c2;
            break;
        }
        c = c1;
    }
    if (!(I_measure > 2)) return 0; /* $(<integer expression> > <integer expression>), line 176 */
    I_prefix = 0; /* $prefix = <integer expression>, line 177 */
    lb = c; c = l; /* backwards, line 178 */

    {   int m3 = l - c; (void)m3; /* do, line 179 */
        {   int ret = r_remove_particle(); /* call remove_particle, line 179 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        c = l - m3;
    }
    if (!(I_measure > 2)) return 0; /* $(<integer expression> > <integer expression>), line 180 */
    {   int m4 = l - c; (void)m4; /* do, line 181 */
        {   int ret = r_remove_possessive_pronoun(); /* call remove_possessive_pronoun, line 181 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        c = l - m4;
    }
    c = lb;
    if (!(I_measure > 2)) return 0; /* $(<integer expression> > <integer expression>), line 183 */
    {   int c5 = c; /* or, line 190 */
        {   int c_test6 = c; /* test, line 184 */
            {   int ret = r_remove_first_order_prefix(); /* call remove_first_order_prefix, line 185 */
                if (ret == 0) goto lab5;
                if (ret < 0) return ret;
            }
            {   int c7 = c; /* do, line 186 */
                {   int c_test8 = c; /* test, line 187 */
                    if (!(I_measure > 2)) goto lab6; /* $(<integer expression> > <integer expression>), line 187 */
                    lb = c; c = l; /* backwards, line 187 */

                    {   int ret = r_remove_suffix(); /* call remove_suffix, line 187 */
                        if (ret == 0) goto lab6;
                        if (ret < 0) return ret;
                    }
                    c = lb;
                    c = c_test8;
                }
                if (!(I_measure > 2)) goto lab6; /* $(<integer expression> > <integer expression>), line 188 */
                {   int ret = r_remove_second_order_prefix(); /* call remove_second_order_prefix, line 188 */
                    if (ret == 0) goto lab6;
                    if (ret < 0) return ret;
                }
            lab6:
                c = c7;
            }
            c = c_test6;
        }
        goto lab4;
    lab5:
        c = c5;
        {   int c9 = c; /* do, line 191 */
            {   int ret = r_remove_second_order_prefix(); /* call remove_second_order_prefix, line 191 */
                if (ret == 0) goto lab7;
                if (ret < 0) return ret;
            }
        lab7:
            c = c9;
        }
        {   int c10 = c; /* do, line 192 */
            if (!(I_measure > 2)) goto lab8; /* $(<integer expression> > <integer expression>), line 192 */
            lb = c; c = l; /* backwards, line 192 */

            {   int ret = r_remove_suffix(); /* call remove_suffix, line 192 */
                if (ret == 0) goto lab8;
                if (ret < 0) return ret;
            }
            c = lb;
        lab8:
            c = c10;
        }
    }
lab4:
    return 1;
}

Xapian::InternalStemIndonesian::InternalStemIndonesian()
    : I_prefix(0), I_measure(0)
{
}

Xapian::InternalStemIndonesian::~InternalStemIndonesian()
{
}

std::string
Xapian::InternalStemIndonesian::get_description() const
{
    return "indonesian";
}
