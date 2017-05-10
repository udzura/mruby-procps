mrb_value mruby_Procps_openproc_by_pids(mrb_state *mrb, mrb_value self) {

  mrb_int unboxed_flags;
  mrb_value *pid_array;
  mrb_int size;

  /* Fetch the args */
  mrb_get_args(mrb, "ia", &unboxed_flags, &pid_array, &size);
  pid_t *pidlist = mrb_malloc(mrb, size + 1);
  for (int i = 0; i < size; i++) {
    pidlist[i] = (pid_t)mrb_fixnum(pid_array[i]);
  }
  pidlist[size] = 0;

  /* Invocation */
  PROCTAB *unboxed_return_value = openproc(unboxed_flags | PROC_PID, pidlist);

  /* Box the return value */
  mrb_value boxed_return_value =
      (unboxed_return_value == NULL
           ? mrb_nil_value()
           : mruby_Procps_box_PROCTAB(mrb, unboxed_return_value));

  return boxed_return_value;
}

mrb_value mrb_Proc_get_tid(mrb_state *mrb, mrb_value self) {
  proc_t *p = mruby_Procps_unbox_proc_t(self);
  return mrb_fixnum_value(p->tid);
}

mrb_value mrb_Proc_get_ppid(mrb_state *mrb, mrb_value self) {
  proc_t *p = mruby_Procps_unbox_proc_t(self);
  return mrb_fixnum_value(p->ppid);
}
