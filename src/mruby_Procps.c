/**
 * NOTE: Unlike most other generated files,
 *       mruby-bindings will not alter this file
 *       on subsequent code generation runs.
 *
 *       This means you're free to make modifications of your own.
 *
 *       It also means that any changes to the genenerate code
 *       must be merged in manually (but this is rare, only occurring
 *       when a new version of mruby-bindings is used). In that case,
 *       just diff your file with its generated version in the
 *       mruby-bindings.out/mrbgem/src/ directory.
 */

#include <stdlib.h>
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/hash.h"
#include "mruby/array.h"
#include "mruby/error.h"
#include "mruby/value.h"
#include "mruby/variable.h"
#include "mruby/string.h"
#include "mruby/compile.h"
#include "mruby/proc.h"
#include "mruby/data.h"

/*
 * TODO: Include your library here
 */
#include "procps_headers.h"

#include "generated/mruby_to_native_ref.h"

#include "generated/mruby_Procps_class_macros.h"
#include "generated/mruby_Procps_pointer.c"
#include "generated/mruby_Procps_void_pointer.c"
#include "generated/mruby_Procps_classes.c"
#include "generated/mruby_Procps_functions.c"

void
mrb_mruby_procps_gem_init(mrb_state* mrb)
{
  mrb_define_module(mrb, "Procps");

  #include "generated/mruby_Procps_class_initializations.c"
  #include "generated/mruby_Procps_function_initializations.c"
  #include "generated/mruby_Procps_enum_constants.c"
}

void
mrb_mruby_procps_gem_final(mrb_state* mrb)
{ }
