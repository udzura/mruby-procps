module MRuby::Bindings
  ['proc_t *', 'proc_t *restrict'].each do |tname|
    t = CTypes.learn_pointer_to_value_type(tname, 'proc_t')
    t.type_check_template = ""
  end

  ['PROCTAB *', 'PROCTAB *const restrict', 'PROCTAB *restrict'].each do |tname|
    CTypes.learn_pointer_to_value_type(tname, 'PROCTAB')
  end

  # Copy from builtin_ctypes.rb
  CTypes.define(['pid_t', 'dev_t']) do
    self.recv_template = 'mrb_int %{value};'
    self.needs_unboxing = false
    self.needs_type_check = false
    self.format_specifier = 'i'
    boxing_fn.invocation_template = "mrb_value %{as} = mrb_fixnum_value(%{box});"
    unboxing_fn.invocation_template = "#{type_name} %{as} = (#{type_name})%{unbox};"
    self.type_check_template = <<EOF
if (!mrb_obj_is_kind_of(mrb, %{value}, mrb->fixnum_class)) {
  mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
  return mrb_nil_value();
}
EOF
  end

  CTypes.define('char *restrict') do
    self.recv_template = 'char * %{value} = NULL;'
    self.format_specifier = 'z'
    boxing_fn.invocation_template = "mrb_value %{as} = %{box} == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, %{box});"
    unboxing_fn.invocation_template = "#{type_name} %{as} = mrb_string_value_cstr(mrb, &%{unbox});"
    self.type_check_template = <<EOF
if (!mrb_obj_is_kind_of(mrb, %{value}, mrb->string_class)) {
  mrb_raise(mrb, E_TYPE_ERROR, "String expected");
  return mrb_nil_value();
}
EOF
  end
end
