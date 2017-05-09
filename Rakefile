file "declarations.json" do
  sh "cat /dev/null > declarations.json"
  sh "find procps/build/include -name '*.h' | xargs -n 1 clang2json/build/clang2json >> declarations.json"
end

task :regen do
  sh "./bin/mruby-bindings main"
  sh "rm -rf src/generated && cp -rf mruby-bindings.out/mrbgem/src/generated ./src"
  sh "rm -rf include/generated && cp -rf mruby-bindings.out/mrbgem/include/generated ./include"
end
