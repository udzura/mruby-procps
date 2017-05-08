/**
 * Ruby Class: DiskStat 
 * Wraps: disk_stat
 */

#ifndef mruby_Procps_free_DiskStat_ptr
#define mruby_Procps_free_DiskStat_ptr(obj) free(obj)
#endif

static void
mruby_Procps_free_disk_stat(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_Procps_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_Procps_free_DiskStat_ptr(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type disk_stat_data_type = {
   "disk_stat", mruby_Procps_free_disk_stat
};

void mruby_Procps_DiskStat_init(mrb_state* mrb)
{
  struct RClass* DiskStat_class;
  if (!mrb_const_defined(mrb, mrb_obj_value(Procps_module(mrb)), mrb_intern_cstr(mrb, "DiskStat"))) {
    DiskStat_class = mrb_define_class_under(mrb, Procps_module(mrb), "DiskStat", mrb->object_class);
  } else {
    DiskStat_class = mrb_class_get_under(mrb, Procps_module(mrb), "DiskStat");
  }
  MRB_SET_INSTANCE_TT(DiskStat_class, MRB_TT_DATA);
  mrb_include_module(mrb, DiskStat_class, Procps_Pointer_module(mrb));
}

unsigned char
mruby_Procps_typecheck_DiskStat(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, Procps_DiskStat_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, Procps_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
  }
}

mrb_value
mruby_Procps_box_disk_stat(mrb_state* mrb, disk_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_DiskStat_class(mrb), &disk_stat_data_type, box));
}

mrb_value
mruby_Procps_giftwrap_disk_stat(mrb_state* mrb, disk_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_DiskStat_class(mrb), &disk_stat_data_type, box));
}

void
mruby_Procps_set_disk_stat_data_ptr(mrb_value obj, disk_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &disk_stat_data_type);
}

void
mruby_Procps_gift_disk_stat_data_ptr(mrb_value obj, disk_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &disk_stat_data_type);
}

disk_stat *
mruby_Procps_unbox_disk_stat(mrb_value boxed)
{
  return (disk_stat *)mruby_Procps_unbox(boxed);
}

/**
 * Ruby Class: PROCTAB 
 * Wraps: PROCTAB
 */

#ifndef mruby_Procps_free_PROCTAB_ptr
#define mruby_Procps_free_PROCTAB_ptr(obj) free(obj)
#endif

static void
mruby_Procps_free_PROCTAB(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_Procps_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_Procps_free_PROCTAB_ptr(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type PROCTAB_data_type = {
   "PROCTAB", mruby_Procps_free_PROCTAB
};

void mruby_Procps_PROCTAB_init(mrb_state* mrb)
{
  struct RClass* PROCTAB_class;
  if (!mrb_const_defined(mrb, mrb_obj_value(Procps_module(mrb)), mrb_intern_cstr(mrb, "PROCTAB"))) {
    PROCTAB_class = mrb_define_class_under(mrb, Procps_module(mrb), "PROCTAB", mrb->object_class);
  } else {
    PROCTAB_class = mrb_class_get_under(mrb, Procps_module(mrb), "PROCTAB");
  }
  MRB_SET_INSTANCE_TT(PROCTAB_class, MRB_TT_DATA);
  mrb_include_module(mrb, PROCTAB_class, Procps_Pointer_module(mrb));
}

unsigned char
mruby_Procps_typecheck_PROCTAB(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, Procps_PROCTAB_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, Procps_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
  }
}

mrb_value
mruby_Procps_box_PROCTAB(mrb_state* mrb, PROCTAB *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_PROCTAB_class(mrb), &PROCTAB_data_type, box));
}

mrb_value
mruby_Procps_giftwrap_PROCTAB(mrb_state* mrb, PROCTAB *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_PROCTAB_class(mrb), &PROCTAB_data_type, box));
}

void
mruby_Procps_set_PROCTAB_data_ptr(mrb_value obj, PROCTAB *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &PROCTAB_data_type);
}

void
mruby_Procps_gift_PROCTAB_data_ptr(mrb_value obj, PROCTAB *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &PROCTAB_data_type);
}

PROCTAB *
mruby_Procps_unbox_PROCTAB(mrb_value boxed)
{
  return (PROCTAB *)mruby_Procps_unbox(boxed);
}

/**
 * Ruby Class: PartitionStat 
 * Wraps: partition_stat
 */

#ifndef mruby_Procps_free_PartitionStat_ptr
#define mruby_Procps_free_PartitionStat_ptr(obj) free(obj)
#endif

static void
mruby_Procps_free_partition_stat(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_Procps_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_Procps_free_PartitionStat_ptr(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type partition_stat_data_type = {
   "partition_stat", mruby_Procps_free_partition_stat
};

void mruby_Procps_PartitionStat_init(mrb_state* mrb)
{
  struct RClass* PartitionStat_class;
  if (!mrb_const_defined(mrb, mrb_obj_value(Procps_module(mrb)), mrb_intern_cstr(mrb, "PartitionStat"))) {
    PartitionStat_class = mrb_define_class_under(mrb, Procps_module(mrb), "PartitionStat", mrb->object_class);
  } else {
    PartitionStat_class = mrb_class_get_under(mrb, Procps_module(mrb), "PartitionStat");
  }
  MRB_SET_INSTANCE_TT(PartitionStat_class, MRB_TT_DATA);
  mrb_include_module(mrb, PartitionStat_class, Procps_Pointer_module(mrb));
}

unsigned char
mruby_Procps_typecheck_PartitionStat(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, Procps_PartitionStat_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, Procps_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
  }
}

mrb_value
mruby_Procps_box_partition_stat(mrb_state* mrb, partition_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_PartitionStat_class(mrb), &partition_stat_data_type, box));
}

mrb_value
mruby_Procps_giftwrap_partition_stat(mrb_state* mrb, partition_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_PartitionStat_class(mrb), &partition_stat_data_type, box));
}

void
mruby_Procps_set_partition_stat_data_ptr(mrb_value obj, partition_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &partition_stat_data_type);
}

void
mruby_Procps_gift_partition_stat_data_ptr(mrb_value obj, partition_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &partition_stat_data_type);
}

partition_stat *
mruby_Procps_unbox_partition_stat(mrb_value boxed)
{
  return (partition_stat *)mruby_Procps_unbox(boxed);
}

/**
 * Ruby Class: Proc 
 * Wraps: proc_t
 */

#ifndef mruby_Procps_free_Proc_ptr
#define mruby_Procps_free_Proc_ptr(obj) free(obj)
#endif

static void
mruby_Procps_free_proc_t(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_Procps_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_Procps_free_Proc_ptr(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type proc_t_data_type = {
   "proc_t", mruby_Procps_free_proc_t
};

void mruby_Procps_Proc_init(mrb_state* mrb)
{
  struct RClass* Proc_class;
  if (!mrb_const_defined(mrb, mrb_obj_value(Procps_module(mrb)), mrb_intern_cstr(mrb, "Proc"))) {
    Proc_class = mrb_define_class_under(mrb, Procps_module(mrb), "Proc", mrb->object_class);
  } else {
    Proc_class = mrb_class_get_under(mrb, Procps_module(mrb), "Proc");
  }
  MRB_SET_INSTANCE_TT(Proc_class, MRB_TT_DATA);
  mrb_include_module(mrb, Proc_class, Procps_Pointer_module(mrb));
}

unsigned char
mruby_Procps_typecheck_Proc(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, Procps_Proc_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, Procps_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
  }
}

mrb_value
mruby_Procps_box_proc_t(mrb_state* mrb, proc_t *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_Proc_class(mrb), &proc_t_data_type, box));
}

mrb_value
mruby_Procps_giftwrap_proc_t(mrb_state* mrb, proc_t *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_Proc_class(mrb), &proc_t_data_type, box));
}

void
mruby_Procps_set_proc_t_data_ptr(mrb_value obj, proc_t *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &proc_t_data_type);
}

void
mruby_Procps_gift_proc_t_data_ptr(mrb_value obj, proc_t *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &proc_t_data_type);
}

proc_t *
mruby_Procps_unbox_proc_t(mrb_value boxed)
{
  return (proc_t *)mruby_Procps_unbox(boxed);
}

/**
 * Ruby Class: ProcData 
 * Wraps: proc_data_t
 */

#ifndef mruby_Procps_free_ProcData_ptr
#define mruby_Procps_free_ProcData_ptr(obj) free(obj)
#endif

static void
mruby_Procps_free_proc_data_t(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_Procps_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_Procps_free_ProcData_ptr(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type proc_data_t_data_type = {
   "proc_data_t", mruby_Procps_free_proc_data_t
};

void mruby_Procps_ProcData_init(mrb_state* mrb)
{
  struct RClass* ProcData_class;
  if (!mrb_const_defined(mrb, mrb_obj_value(Procps_module(mrb)), mrb_intern_cstr(mrb, "ProcData"))) {
    ProcData_class = mrb_define_class_under(mrb, Procps_module(mrb), "ProcData", mrb->object_class);
  } else {
    ProcData_class = mrb_class_get_under(mrb, Procps_module(mrb), "ProcData");
  }
  MRB_SET_INSTANCE_TT(ProcData_class, MRB_TT_DATA);
  mrb_include_module(mrb, ProcData_class, Procps_Pointer_module(mrb));
}

unsigned char
mruby_Procps_typecheck_ProcData(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, Procps_ProcData_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, Procps_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
  }
}

mrb_value
mruby_Procps_box_proc_data_t(mrb_state* mrb, proc_data_t *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_ProcData_class(mrb), &proc_data_t_data_type, box));
}

mrb_value
mruby_Procps_giftwrap_proc_data_t(mrb_state* mrb, proc_data_t *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_ProcData_class(mrb), &proc_data_t_data_type, box));
}

void
mruby_Procps_set_proc_data_t_data_ptr(mrb_value obj, proc_data_t *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &proc_data_t_data_type);
}

void
mruby_Procps_gift_proc_data_t_data_ptr(mrb_value obj, proc_data_t *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &proc_data_t_data_type);
}

proc_data_t *
mruby_Procps_unbox_proc_data_t(mrb_value boxed)
{
  return (proc_data_t *)mruby_Procps_unbox(boxed);
}

/**
 * Ruby Class: SlabCache 
 * Wraps: slab_cache
 */

#ifndef mruby_Procps_free_SlabCache_ptr
#define mruby_Procps_free_SlabCache_ptr(obj) free(obj)
#endif

static void
mruby_Procps_free_slab_cache(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_Procps_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_Procps_free_SlabCache_ptr(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type slab_cache_data_type = {
   "slab_cache", mruby_Procps_free_slab_cache
};

void mruby_Procps_SlabCache_init(mrb_state* mrb)
{
  struct RClass* SlabCache_class;
  if (!mrb_const_defined(mrb, mrb_obj_value(Procps_module(mrb)), mrb_intern_cstr(mrb, "SlabCache"))) {
    SlabCache_class = mrb_define_class_under(mrb, Procps_module(mrb), "SlabCache", mrb->object_class);
  } else {
    SlabCache_class = mrb_class_get_under(mrb, Procps_module(mrb), "SlabCache");
  }
  MRB_SET_INSTANCE_TT(SlabCache_class, MRB_TT_DATA);
  mrb_include_module(mrb, SlabCache_class, Procps_Pointer_module(mrb));
}

unsigned char
mruby_Procps_typecheck_SlabCache(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, Procps_SlabCache_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, Procps_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
  }
}

mrb_value
mruby_Procps_box_slab_cache(mrb_state* mrb, slab_cache *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_SlabCache_class(mrb), &slab_cache_data_type, box));
}

mrb_value
mruby_Procps_giftwrap_slab_cache(mrb_state* mrb, slab_cache *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_SlabCache_class(mrb), &slab_cache_data_type, box));
}

void
mruby_Procps_set_slab_cache_data_ptr(mrb_value obj, slab_cache *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &slab_cache_data_type);
}

void
mruby_Procps_gift_slab_cache_data_ptr(mrb_value obj, slab_cache *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &slab_cache_data_type);
}

slab_cache *
mruby_Procps_unbox_slab_cache(mrb_value boxed)
{
  return (slab_cache *)mruby_Procps_unbox(boxed);
}

/**
 * Ruby Class: SlabInfo 
 * Wraps: struct slab_info
 */

#ifndef mruby_Procps_free_SlabInfo_ptr
#define mruby_Procps_free_SlabInfo_ptr(obj) free(obj)
#endif

static void
mruby_Procps_free_slab_info(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_Procps_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_Procps_free_SlabInfo_ptr(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type slab_info_data_type = {
   "struct slab_info", mruby_Procps_free_slab_info
};

void mruby_Procps_SlabInfo_init(mrb_state* mrb)
{
  struct RClass* SlabInfo_class;
  if (!mrb_const_defined(mrb, mrb_obj_value(Procps_module(mrb)), mrb_intern_cstr(mrb, "SlabInfo"))) {
    SlabInfo_class = mrb_define_class_under(mrb, Procps_module(mrb), "SlabInfo", mrb->object_class);
  } else {
    SlabInfo_class = mrb_class_get_under(mrb, Procps_module(mrb), "SlabInfo");
  }
  MRB_SET_INSTANCE_TT(SlabInfo_class, MRB_TT_DATA);
  mrb_include_module(mrb, SlabInfo_class, Procps_Pointer_module(mrb));
}

unsigned char
mruby_Procps_typecheck_SlabInfo(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, Procps_SlabInfo_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, Procps_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
  }
}

mrb_value
mruby_Procps_box_slab_info(mrb_state* mrb, struct slab_info *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_SlabInfo_class(mrb), &slab_info_data_type, box));
}

mrb_value
mruby_Procps_giftwrap_slab_info(mrb_state* mrb, struct slab_info *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_SlabInfo_class(mrb), &slab_info_data_type, box));
}

void
mruby_Procps_set_slab_info_data_ptr(mrb_value obj, struct slab_info *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &slab_info_data_type);
}

void
mruby_Procps_gift_slab_info_data_ptr(mrb_value obj, struct slab_info *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &slab_info_data_type);
}

struct slab_info *
mruby_Procps_unbox_slab_info(mrb_value boxed)
{
  return (struct slab_info *)mruby_Procps_unbox(boxed);
}

/**
 * Ruby Class: SlabStat 
 * Wraps: struct slab_stat
 */

#ifndef mruby_Procps_free_SlabStat_ptr
#define mruby_Procps_free_SlabStat_ptr(obj) free(obj)
#endif

static void
mruby_Procps_free_slab_stat(mrb_state* mrb, void* ptr)
{
  mruby_to_native_ref * native_ref = (mruby_to_native_ref*)ptr;
  if (native_ref
      && mruby_Procps_owns(mrb, native_ref)
      && native_ref->obj) {
    mruby_Procps_free_SlabStat_ptr(native_ref->obj);
    native_ref->obj = NULL;
  }
  free(native_ref);
}

static const
mrb_data_type slab_stat_data_type = {
   "struct slab_stat", mruby_Procps_free_slab_stat
};

void mruby_Procps_SlabStat_init(mrb_state* mrb)
{
  struct RClass* SlabStat_class;
  if (!mrb_const_defined(mrb, mrb_obj_value(Procps_module(mrb)), mrb_intern_cstr(mrb, "SlabStat"))) {
    SlabStat_class = mrb_define_class_under(mrb, Procps_module(mrb), "SlabStat", mrb->object_class);
  } else {
    SlabStat_class = mrb_class_get_under(mrb, Procps_module(mrb), "SlabStat");
  }
  MRB_SET_INSTANCE_TT(SlabStat_class, MRB_TT_DATA);
  mrb_include_module(mrb, SlabStat_class, Procps_Pointer_module(mrb));
}

unsigned char
mruby_Procps_typecheck_SlabStat(mrb_state* mrb, mrb_value obj)
{
  if (mrb_obj_is_kind_of(mrb, obj, Procps_SlabStat_class(mrb)) ||
      mrb_obj_is_kind_of(mrb, obj, Procps_VoidPointer_class(mrb))) {
    return 1;
  } else {
    return 0;
  }
}

mrb_value
mruby_Procps_box_slab_stat(mrb_state* mrb, struct slab_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_SlabStat_class(mrb), &slab_stat_data_type, box));
}

mrb_value
mruby_Procps_giftwrap_slab_stat(mrb_state* mrb, struct slab_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  return mrb_obj_value(Data_Wrap_Struct(mrb, Procps_SlabStat_class(mrb), &slab_stat_data_type, box));
}

void
mruby_Procps_set_slab_stat_data_ptr(mrb_value obj, struct slab_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_unmanaged_ref_create(unboxed);
  mrb_data_init(obj, box, &slab_stat_data_type);
}

void
mruby_Procps_gift_slab_stat_data_ptr(mrb_value obj, struct slab_stat *unboxed)
{
  mruby_to_native_ref* box = mruby_Procps_managed_ref_create(unboxed);
  mrb_data_init(obj, box, &slab_stat_data_type);
}

struct slab_stat *
mruby_Procps_unbox_slab_stat(mrb_value boxed)
{
  return (struct slab_stat *)mruby_Procps_unbox(boxed);
}

