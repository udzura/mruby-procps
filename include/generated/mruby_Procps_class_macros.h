#define Procps_module(mrb) mrb_module_get(mrb, "Procps")

#define Procps_Pointer_module(mrb) mrb_module_get_under(mrb, Procps_module(mrb), "Pointer")

#define Procps_VoidPointer_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "VoidPointer")

#define Procps_PROCTAB_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "PROCTAB")

#define Procps_DiskStat_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "DiskStat")

#define Procps_PartitionStat_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "PartitionStat")

#define Procps_ProcData_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "ProcData")

#define Procps_Proc_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "Proc")

#define Procps_SlabCache_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "SlabCache")

#define Procps_SlabInfo_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "SlabInfo")

#define Procps_SlabStat_class(mrb) mrb_class_get_under(mrb, Procps_module(mrb), "SlabStat")

