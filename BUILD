load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

package(
    default_visibility = ["//visibility:public"],
)

cmake(
    name = "systemc",
    cache_entries = {
        "CMAKE_CXX_STANDARD" : "17",
    },
    install = True,
    out_lib_dir = "lib64",
    lib_source = "@systemc//:all_srcs",
    out_shared_libs = [
        "libsystemc.so",
        "libsystemc.so.2.3"],
)
