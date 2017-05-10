MRUBY_PROCPS_GEM_DIR = File.expand_path(File.dirname(__FILE__))

desc "Install all of dependencies to generate code"
task :deps do
  sh "git clone --depth=1 https://github.com/jbreeden/clang2json.git"
  Dir.chdir 'clang2json' do
    sh "rake build"
  end
  sh "git clone --depth=1 https://github.com/jbreeden/mruby-bindings.git"

  sh "git clone --depth=1 https://gitlab.com/procps-ng/procps.git"
  Dir.chdir 'procps' do
    sh "./autogen.sh"
    sh "./configure --enable-static --disable-shard --prefix=#{MRUBY_PROCPS_GEM_DIR}/procps/build"
    sh "make"
    sh "make install"
  end

  sh "bundle install --binstubs bin"
end

file "declarations.json" do
  sh "cat /dev/null > declarations.json"
  sh "find procps/build/include -name '*.h' | xargs -n 1 clang2json/build/clang2json >> declarations.json"
end

desc "Re-generate bindings code"
task :regen do
  sh "./bin/mruby-bindings main"
  sh "rm -rf src/generated && cp -rf mruby-bindings.out/mrbgem/src/generated ./src"
  sh "rm -rf include/generated && cp -rf mruby-bindings.out/mrbgem/include/generated ./include"
end
