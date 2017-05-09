module MRuby
  module Bindings
    module Hooks
      def self.module_name
        "Procps"
      end

      def self.gem_name
        "mruby-procps"
      end
    end
  end
end

require_relative 'ctypes'
