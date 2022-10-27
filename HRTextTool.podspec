

Pod::Spec.new do |spec|


  spec.name         = "HRTextTool"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of HRTextTool."

  spec.description  = <<-DESC
                    HRTextTool simple demo
                   DESC

  spec.homepage     = "https://github.com/Harystep/HRTextTool.git"

  spec.license      = "MIT"

  spec.author             = { "huangran" => "warm588@163.com" }

  spec.source       = { :git => "https://github.com/Harystep/HRTextTool.git", :tag => "#{spec.version}" }

  spec.source_files  = "Model/*.{h,m}"

  spec.exclude_files = "Classes/Exclude"



end
