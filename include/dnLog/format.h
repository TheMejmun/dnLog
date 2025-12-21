//
// Created by Saman on 21.12.25.
//

#ifndef DIGILOG_FORMAT_H
#define DIGILOG_FORMAT_H

#include <string>
#include <sstream>

namespace dn {
    template<typename... ARGS>
    std::string format(ARGS &&... args) {
        std::stringstream stream{};
        (
                (stream << args << " "),
                ...
        );
        return stream.str();
    }
}

#endif //DIGILOG_FORMAT_H