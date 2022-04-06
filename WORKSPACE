workspace(name = "rules_systemc")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "rules_foreign_cc",
    sha256 = "bcd0c5f46a49b85b384906daae41d277b3dc0ff27c7c752cc51e43048a58ec83",
    strip_prefix = "rules_foreign_cc-0.7.1",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/0.7.1.tar.gz",
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

_SYSTEMC_ALL_CONTENT = """\
filegroup(
    name = "all_srcs",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)
"""

http_archive(
    name = "systemc",
    build_file_content = _SYSTEMC_ALL_CONTENT,
    strip_prefix = "systemc-2.3.3",
    urls = [
        "https://www.accellera.org/images/downloads/standards/systemc/systemc-2.3.3.tar.gz",
    ],
    sha256 = "5781b9a351e5afedabc37d145e5f7edec08f3fd5de00ffeb8fa1f3086b1f7b3f",
)
