<<<<<<< HEAD
// Copyright (c) 2022 The Bitcoin Core developers
=======
// Copyright (c) 2022 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <kernel/checks.h>

#include <random.h>
#include <util/result.h>
#include <util/translation.h>

#include <memory>

namespace kernel {

util::Result<void> SanityChecks(const Context&)
{
    if (!Random_SanityCheck()) {
        return util::Error{Untranslated("OS cryptographic RNG sanity check failure. Aborting.")};
    }

    return {};
}

}
