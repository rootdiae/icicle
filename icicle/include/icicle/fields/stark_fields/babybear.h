#pragma once

#include "icicle/fields/storage.h"
#include "icicle/fields/field.h"
#include "icicle/fields/quartic_extension.h"
#include "icicle/fields/params_gen.h"

namespace babybear {
  struct fp_config {
    static constexpr storage<1> modulus = {0x78000001};
    static constexpr unsigned reduced_digits_count = 18;
    static constexpr storage_array<reduced_digits_count, 1> reduced_digits = {
      {{0x1},
       {0xffffffe},
       {0x45dddde3},
       {0x12f37bfb},
       {0x27922ab6},
       {0x6394fa39},
       {0xb8efb44},
       {0x57578192},
       {0x25abb864},
       {0x6fa2bae8},
       {0x11d80ae0},
       {0x71eed7bd},
       {0x4cf166f8},
       {0x43dae013},
       {0x173e21fb},
       {0x5e6a622e},
       {0x169483e4},
       {0x0fd43bf8}}};
    PARAMS(modulus)
    MOD_SQR_SUBS()
    static constexpr storage_array<mod_subs_count, 2 * limbs_count + 2> mod_subs = {
      {{0x00000000, 0x00000000, 0x00000000, 0x00000000}, {0xac444443, 0x1fffffff, 0x00000000, 0x00000000},
       {0xd0888887, 0x3fffffff, 0x00000000, 0x00000000}, {0xf4cccccb, 0x5fffffff, 0x00000000, 0x00000000},
       {0xa111110e, 0x7fffffff, 0x00000000, 0x00000000}, {0xc5555552, 0x9fffffff, 0x00000000, 0x00000000},
       {0xe9999996, 0xbfffffff, 0x00000000, 0x00000000}, {0x95ddddd9, 0xdfffffff, 0x00000000, 0x00000000},
       {0xba22221d, 0xffffffff, 0x00000000, 0x00000000}, {0xde666661, 0x1fffffff, 0x00000001, 0x00000000},
       {0x8aaaaaa4, 0x3fffffff, 0x00000001, 0x00000000}, {0xaeeeeee8, 0x5fffffff, 0x00000001, 0x00000000},
       {0xd333332c, 0x7fffffff, 0x00000001, 0x00000000}, {0xf7777770, 0x9fffffff, 0x00000001, 0x00000000},
       {0xa3bbbbb3, 0xbfffffff, 0x00000001, 0x00000000}, {0xc7fffff7, 0xdfffffff, 0x00000001, 0x00000000},
       {0xec44443b, 0xffffffff, 0x00000001, 0x00000000}, {0x9888887e, 0x1fffffff, 0x00000002, 0x00000000},
       {0xbcccccc2, 0x3fffffff, 0x00000002, 0x00000000}, {0xe1111106, 0x5fffffff, 0x00000002, 0x00000000},
       {0x8d555549, 0x7fffffff, 0x00000002, 0x00000000}, {0xb199998d, 0x9fffffff, 0x00000002, 0x00000000},
       {0xd5ddddd1, 0xbfffffff, 0x00000002, 0x00000000}, {0xfa222215, 0xdfffffff, 0x00000002, 0x00000000},
       {0xa6666658, 0xffffffff, 0x00000002, 0x00000000}, {0xcaaaaa9c, 0x1fffffff, 0x00000003, 0x00000000},
       {0xeeeeeee0, 0x3fffffff, 0x00000003, 0x00000000}, {0x9b333323, 0x5fffffff, 0x00000003, 0x00000000},
       {0xbf777767, 0x7fffffff, 0x00000003, 0x00000000}, {0xe3bbbbab, 0x9fffffff, 0x00000003, 0x00000000},
       {0x8fffffee, 0xbfffffff, 0x00000003, 0x00000000}, {0xb4444432, 0xdfffffff, 0x00000003, 0x00000000},
       {0xd8888876, 0xffffffff, 0x00000003, 0x00000000}, {0xfcccccba, 0x1fffffff, 0x00000004, 0x00000000},
       {0xa91110fd, 0x3fffffff, 0x00000004, 0x00000000}, {0xcd555541, 0x5fffffff, 0x00000004, 0x00000000},
       {0xf1999985, 0x7fffffff, 0x00000004, 0x00000000}, {0x9dddddc8, 0x9fffffff, 0x00000004, 0x00000000},
       {0xc222220c, 0xbfffffff, 0x00000004, 0x00000000}, {0xe6666650, 0xdfffffff, 0x00000004, 0x00000000},
       {0x92aaaa93, 0xffffffff, 0x00000004, 0x00000000}, {0xb6eeeed7, 0x1fffffff, 0x00000005, 0x00000000},
       {0xdb33331b, 0x3fffffff, 0x00000005, 0x00000000}, {0xff77775f, 0x5fffffff, 0x00000005, 0x00000000},
       {0xabbbbba2, 0x7fffffff, 0x00000005, 0x00000000}, {0xcfffffe6, 0x9fffffff, 0x00000005, 0x00000000},
       {0xf444442a, 0xbfffffff, 0x00000005, 0x00000000}, {0xa088886d, 0xdfffffff, 0x00000005, 0x00000000},
       {0xc4ccccb1, 0xffffffff, 0x00000005, 0x00000000}, {0xe91110f5, 0x1fffffff, 0x00000006, 0x00000000},
       {0x95555538, 0x3fffffff, 0x00000006, 0x00000000}, {0xb999997c, 0x5fffffff, 0x00000006, 0x00000000},
       {0xddddddc0, 0x7fffffff, 0x00000006, 0x00000000}, {0x8a222203, 0x9fffffff, 0x00000006, 0x00000000},
       {0xae666647, 0xbfffffff, 0x00000006, 0x00000000}, {0xd2aaaa8b, 0xdfffffff, 0x00000006, 0x00000000},
       {0xf6eeeecf, 0xffffffff, 0x00000006, 0x00000000}, {0xa3333312, 0x1fffffff, 0x00000007, 0x00000000},
       {0xc7777756, 0x3fffffff, 0x00000007, 0x00000000}, {0xebbbbb9a, 0x5fffffff, 0x00000007, 0x00000000},
       {0x97ffffdd, 0x7fffffff, 0x00000007, 0x00000000}, {0xbc444421, 0x9fffffff, 0x00000007, 0x00000000},
       {0xe0888865, 0xbfffffff, 0x00000007, 0x00000000}, {0x8ccccca8, 0xdfffffff, 0x00000007, 0x00000000},
       {0xb11110ec, 0xffffffff, 0x00000007, 0x00000000}, {0xd5555530, 0x1fffffff, 0x00000008, 0x00000000},
       {0xf9999974, 0x3fffffff, 0x00000008, 0x00000000}, {0xa5ddddb7, 0x5fffffff, 0x00000008, 0x00000000},
       {0xca2221fb, 0x7fffffff, 0x00000008, 0x00000000}, {0xee66663f, 0x9fffffff, 0x00000008, 0x00000000},
       {0x9aaaaa82, 0xbfffffff, 0x00000008, 0x00000000}, {0xbeeeeec6, 0xdfffffff, 0x00000008, 0x00000000}}};

    static constexpr storage<1> rou = {0x00000089};
    TWIDDLES(modulus, rou)

    // nonresidue to generate the extension field
    static constexpr uint32_t nonresidue = 11;
    // true if nonresidue is negative.
    static constexpr bool nonresidue_is_negative = false;
  };

  /**
   * Scalar field. Is always a prime field.
   */
  typedef Field<fp_config> scalar_t;

  /**
   * Quartic extension field of `scalar_t` enabled if `-DEXT_FIELD` env variable is.
   */
  typedef QuarticExtensionField<fp_config, scalar_t> q_extension_t;

  /**
   * The default extension type
   */
  typedef q_extension_t extension_t;
} // namespace babybear
