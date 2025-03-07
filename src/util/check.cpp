<<<<<<< HEAD
// Copyright (c) 2022 The Bitcoin Core developers
=======
// Copyright (c) 2022 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <util/check.h>

<<<<<<< HEAD
#include <bitcoin-build-config.h> // IWYU pragma: keep
=======
#include <bitnova-build-config.h> // IWYU pragma: keep
>>>>>>> 5360f2baff (Initialized BitNova project)

#include <clientversion.h>
#include <tinyformat.h>

#include <cstdio>
#include <cstdlib>
#include <string>
#include <string_view>

std::string StrFormatInternalBug(std::string_view msg, std::string_view file, int line, std::string_view func)
{
    return strprintf("Internal bug detected: %s\n%s:%d (%s)\n"
                     "%s %s\n"
                     "Please report this issue here: %s\n",
                     msg, file, line, func, CLIENT_NAME, FormatFullVersion(), CLIENT_BUGREPORT);
}

NonFatalCheckError::NonFatalCheckError(std::string_view msg, std::string_view file, int line, std::string_view func)
    : std::runtime_error{StrFormatInternalBug(msg, file, line, func)}
{
}

void assertion_fail(std::string_view file, int line, std::string_view func, std::string_view assertion)
{
    auto str = strprintf("%s:%s %s: Assertion `%s' failed.\n", file, line, func, assertion);
    fwrite(str.data(), 1, str.size(), stderr);
    std::abort();
}
