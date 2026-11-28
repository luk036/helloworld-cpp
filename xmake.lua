add_rules("mode.debug", "mode.release")

target("foo")
    set_kind("static")
    add_files("src/foo.cpp")

target("helloworld-cpp")
    add_deps("foo")
    add_files("src/main.cpp")
