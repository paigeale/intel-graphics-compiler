/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/
#ifndef IGA_BXML_OPS_HPP
#define IGA_BXML_OPS_HPP

// ******************** DO NOT MODIFY DIRECTLY ********************
// Auto-generated by IGA project tools

namespace iga
{
    enum class Op
    {
        INVALID = 0,
        FIRST_OP = 1,

        ADD          = FIRST_OP +   0,
        ADDC         = FIRST_OP +   2,
        AND          = FIRST_OP +   3,
        ASR          = FIRST_OP +   4,
        AVG          = FIRST_OP +   5,
        BFE          = FIRST_OP +   6,
        BFI1         = FIRST_OP +   7,
        BFI2         = FIRST_OP +   8,
        BFREV        = FIRST_OP + 266,
        BRC          = FIRST_OP + 267,
        BRD          = FIRST_OP + 268,
        BREAK        = FIRST_OP + 269,
        CALL         = FIRST_OP + 270,
        CALLA        = FIRST_OP + 271,
        CBIT         = FIRST_OP + 272,
        CMP          = FIRST_OP + 273,
        CMPN         = FIRST_OP + 274,
        CONT         = FIRST_OP + 275,
        CSEL         = FIRST_OP + 276,
        DIM          = FIRST_OP + 277,
        DP2          = FIRST_OP + 278,
        DP3          = FIRST_OP + 279,
        DP4          = FIRST_OP + 280,
        DP4A         = FIRST_OP + 281,
        DPH          = FIRST_OP + 348,
        ELSE         = FIRST_OP + 349,
        ENDIF        = FIRST_OP + 350,
        F16TO32      = FIRST_OP + 351,
        F32TO16      = FIRST_OP + 352,
        FBH          = FIRST_OP + 353,
        FBL          = FIRST_OP + 354,
        FRC          = FIRST_OP + 355,
        GOTO         = FIRST_OP + 356,
        HALT         = FIRST_OP + 357,
        IF           = FIRST_OP + 358,
        ILLEGAL      = FIRST_OP + 359,
        JMPI         = FIRST_OP + 360,
        JOIN         = FIRST_OP + 361,
        LINE         = FIRST_OP + 362,
        LRP          = FIRST_OP + 363,
        LZD          = FIRST_OP + 364,
        MAC          = FIRST_OP + 365,
        MACH         = FIRST_OP + 366,
        MAD          = FIRST_OP + 367,
        MADM         = FIRST_OP + 368,
        MATH         = FIRST_OP + 369,
        MATH_COS     = FIRST_OP + 370,
        MATH_EXP     = FIRST_OP + 371,
        MATH_FDIV    = FIRST_OP + 372,
        MATH_IDIV    = FIRST_OP + 373,
        MATH_INV     = FIRST_OP + 374,
        MATH_INVM    = FIRST_OP + 375,
        MATH_IQOT    = FIRST_OP + 376,
        MATH_IREM    = FIRST_OP + 377,
        MATH_LOG     = FIRST_OP + 378,
        MATH_POW     = FIRST_OP + 379,
        MATH_RSQT    = FIRST_OP + 380,
        MATH_RSQTM   = FIRST_OP + 381,
        MATH_SIN     = FIRST_OP + 382,
        MATH_SQT     = FIRST_OP + 383,
        MOV          = FIRST_OP + 384,
        MOVI         = FIRST_OP + 385,
        MUL          = FIRST_OP + 386,
        NOP          = FIRST_OP + 387,
        NOT          = FIRST_OP + 388,
        OR           = FIRST_OP + 389,
        PLN          = FIRST_OP + 390,
        RET          = FIRST_OP + 391,
        RNDD         = FIRST_OP + 392,
        RNDE         = FIRST_OP + 393,
        RNDU         = FIRST_OP + 394,
        RNDZ         = FIRST_OP + 395,
        ROL          = FIRST_OP + 396,
        ROR          = FIRST_OP + 397,
        SAD2         = FIRST_OP + 398,
        SADA2        = FIRST_OP + 399,
        SEL          = FIRST_OP + 400,
        SEND         = FIRST_OP + 401,
        SENDC        = FIRST_OP + 402,
        SENDS        = FIRST_OP + 422,
        SENDSC       = FIRST_OP + 423,
        SHL          = FIRST_OP + 443,
        SHR          = FIRST_OP + 444,
        SMOV         = FIRST_OP + 445,
        SUBB         = FIRST_OP + 446,
        WAIT         = FIRST_OP + 453,
        WHILE        = FIRST_OP + 454,
        XOR          = FIRST_OP + 455,

        LAST_OP   = FIRST_OP + 455,
        TOTAL_OPS = LAST_OP
    };
}
#endif // IGA_BXML_OPS_HPP
