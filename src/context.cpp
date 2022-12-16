#include "context.h"
#include <iostream>
#include <pugixml.hpp>

using pugi::xml_document;
using pugi::xml_parse_status;

namespace svgp {
Context::Context(const std::filesystem::__cxx11::path& path)
{
    xml_document doc;
    auto result = doc.load_file(path.c_str());
    if (result.status != xml_parse_status::status_ok) {
        throw result.description();
    }
    std::cout << doc.child("svg").child("line").attribute("y2").as_int() << '\n';
}
} // namespace svgp
