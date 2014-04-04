#include "mruby.h"

extern void mrb_init_gc_test(mrb_state *mrb);

void
mrb_mruby_test_regression_gem_init(mrb_state *mrb)
{
  mrb_init_gc_test(mrb);
}

void
mrb_mruby_test_regression_gem_final(mrb_state *mrb)
{
}

