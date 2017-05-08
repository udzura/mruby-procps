MRuby::Build.new do |conf|
  # load specific toolchain settings
  toolchain :gcc
  enable_debug

  conf.gem 'mruby-bindings.out/mrbgem'
  conf.gembox 'default'
end
