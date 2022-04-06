cc_library(
    name = "soc",
    srcs = ["soc.h"],
    deps = [
        "@rules_systemc//:systemc",
    ],
)

cc_test(
    name = "example_test",
    includes = [":soc"],
    srcs = ["main.cc"],
    deps = [
        "@rules_systemc//:systemc",
        ":soc",
    ],
)
