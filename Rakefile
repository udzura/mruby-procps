file "declarations.json" do
  sh "cat /dev/null > declarations.json"
  sh "find procps/build/include -name '*.h' | xargs -n 1 clang2json/build/clang2json >> declarations.json"
end

# file "mrbgem.rake" => "mruby-bindings.out/mrbgem/mrbgem.rake" do
#   sh "cp -f mruby-bindings.out/mrbgem/mrbgem.rake mrbgem.rake"
# end

task :regen do
  sh "./bin/mruby-bindings main"
  sh "rm -rf src && cp -rf mruby-bindings.out/mrbgem/src ./"
  sh "rm -rf include && cp -rf mruby-bindings.out/mrbgem/include ./"
end
