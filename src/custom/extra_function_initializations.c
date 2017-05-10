mrb_define_class_method(mrb, Procps_module(mrb), "openproc_by_pids",
                        mruby_Procps_openproc_by_pids, MRB_ARGS_REQ(0));

struct RClass *Proc_class;
Proc_class = mrb_class_get_under(mrb, Procps_module(mrb), "Proc");
mrb_define_method(mrb, Proc_class, "tid", mrb_Proc_get_tid, MRB_ARGS_NONE());
mrb_define_method(mrb, Proc_class, "pid", mrb_Proc_get_tid, MRB_ARGS_NONE());
mrb_define_method(mrb, Proc_class, "ppid", mrb_Proc_get_ppid, MRB_ARGS_NONE());
