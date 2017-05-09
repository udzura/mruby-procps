MRUBY_PROCPS_BUILD_ROOT = File.expand_path('../', __FILE__)

MRuby::Build.new do |conf|
  # load specific toolchain settings
  toolchain :gcc
  enable_debug

  conf.gem '../mruby-procps-autogen'
  conf.gembox 'default'

  conf.cc.include_paths << "#{MRUBY_PROCPS_BUILD_ROOT}/procps/build/include"
  conf.linker.library_paths << "#{MRUBY_PROCPS_BUILD_ROOT}/procps/build/lib"
  conf.linker.libraries << "procps"
end
